#ifndef CONTRACTOR_H
#define CONTRACTOR_H

#include <QString>
#include <optional>
#include <QMetaType>

#include "TypeClass/Email.h"
#include "TypeClass/NIP.h"
#include "TypeClass/Phone.h"
#include "TypeClass/PostCode.h"
#include "Address.h"

namespace qfaktury::core
{

class Contractor final
{
public:
    Contractor();
    Contractor(const QString &name, const NIP &nip, const Address &address, std::optional<QString> bankAccount, std::optional<Phone> phone, std::optional<Email> email);

    const QString &getName() const;
    const NIP &nip() const;
    const Address &getAddress() const;
    const std::optional<QString>& getBankAccount() const;
    const std::optional<Phone>& getPhone() const;
    const std::optional<Email>& getEmail() const;

private:
    QString name_;
    NIP nip_;
    Address address;
    std::optional<QString> bankAccount_;
    std::optional<Phone> phone_;
    std::optional<Email> email_;

};

}

Q_DECLARE_METATYPE(qfaktury::core::Contractor);

#endif // CONTRACTOR_H
