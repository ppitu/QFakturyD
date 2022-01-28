#ifndef ADDRESS_H
#define ADDRESS_H

#include "qfaktury-core_global.h"

#include <QMetaType>
#include <QString>
#include <optional>

#include "TypeClass/Street.h"
#include "TypeClass/HouseNumber.h"
#include "TypeClass/FlatNumber.h"
#include "TypeClass/City.h"
#include "TypeClass/PostCode.h"
#include "TypeClass/Municipality.h"
#include "TypeClass/Country.h"
#include "TypeClass/County.h"
#include "TypeClass/Province.h"

namespace qfaktury::core
{

class Address final
{
public:
    Address();
    Address(const Street &street, const HouseNumber &houseNumber, const std::optional<FlatNumber>& flatNumber,
            const City &city, const Municipality &municipality, const PostCode &postCode,
            const std::optional<Country>& country, const std::optional<County>& county, const std::optional<Province>& provice, bool delivery);

    const Street& getStreet() const;
    const HouseNumber &getHouseNumber() const;
    const std::optional<FlatNumber> &getFlatNumber() const;
    const City &getCity() const;
    const Municipality &getMunicipality() const;
    const PostCode &getPostCode() const;
    const std::optional<Country> &getCountry() const;
    const std::optional<County> &getCounty() const;
    const std::optional<Province> &getProvice() const;
    bool getDelivery();

private:
    Street street;
    HouseNumber house_number;
    std::optional<FlatNumber> flat_number;
    City city;
    Municipality municipality;
    PostCode post_code;
    std::optional<Country> country;
    std::optional<County> county;
    std::optional<Province> provice;
    bool delivery;
};

}

#endif // ADDRESS_H
