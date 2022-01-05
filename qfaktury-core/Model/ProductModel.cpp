#include "ProductModel.h"


ProductModel::ProductModel(QObject *parent) :
    QAbstractTableModel(parent),
    db(DatabaseManager::instance()),
    products(db.product_dao.products())
{

}

QModelIndex ProductModel::addProduct(const Product &product)
{
    int rowIndex = rowCount();
    beginInsertRows(QModelIndex(), rowIndex, rowIndex);
    std::unique_ptr<Product> newProduct(new Product(product));
    db.product_dao.addProduct(*newProduct);
    products->push_back(std::move(newProduct));
    endInsertRows();

    return index(rowIndex, 0);
}

int ProductModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return products->size();
}

int ProductModel::columnCount(const QModelIndex &parent) const
{
    return 11;
}

QVariant ProductModel::data(const QModelIndex &index, int role) const
{
    if(!isIndexValid(index))
    {
        return {};
    }

    Product& product = *products->at(index.row());

    switch (role) {
    case Roles::ID_ROLE:
        return QVariant::fromValue(product);
    case Qt::DisplayRole:
        switch (index.column()) {
        case ColumnName::ID: return product.getId();
        case ColumnName::IDENT: return product.getIdent();
        case ColumnName::NAME: return product.getName();
        case ColumnName::CODE: return product.getCode();
        case ColumnName::PKWIU: return product.getPkwiu();
        case ColumnName::QUALITY: return product.getQuality();
        case ColumnName::DESCRIPTION: return product.getDescription();
        case ColumnName::NET: return product.getPrice().getNet();
        case ColumnName::GROSS: return product.getPrice().getGross();
        //case ColumnName::VAT: return product.getPrice().getVat();
        case ColumnName::METRIC: return product.getMetric();
        }
    default:
        return {};
    }

}

bool ProductModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(!isIndexValid(index) || role != Roles::ID_ROLE)
    {
        return false;
    }

    auto product = qvariant_cast<Product>(value);

    /*Product& product = *mProducts->at(index.row());
    product.setIdent(productTemp.getIdent());
    product.setName(productTemp.getName());
    product.setCode(productTemp.getCode());
    product.setPkwiu(productTemp.getPkwiu());
    product.setQuality(productTemp.getQuality());
    product.setDescription(productTemp.getDescription());
    product.setPrice(productTemp.getPrice());
    product.setMetric(productTemp.getMetric());*/
    *products->at(index.row()) = product;

    db.product_dao.updateProduct(product);
    emit dataChanged(index, index);

    return true;
}

bool ProductModel::removeRows(int row, int count, const QModelIndex &parent)
{
    if(row < 0 || row >= rowCount() || count < 0 || (row + count) > rowCount())
    {
        return false;
    }

    beginRemoveRows(parent, row, row + count - 1);
    int countLeft = count;

    while (countLeft--) {
        const Product& product = *products->at(row + countLeft);
        db.product_dao.removeProduct(product.getId());
    }

    products->erase(products->begin() + row, products->begin() + row + count);

    endRemoveRows();

    return true;
}

QHash<int, QByteArray> ProductModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[Roles::ID_ROLE] = "id";
    return roles;
}

bool ProductModel::isIndexValid(const QModelIndex &index) const
{
    return index.isValid() && index.row() < rowCount();
}
