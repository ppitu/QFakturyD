#include "Address.h"

namespace qfaktury::core {

const Street& Address::getStreet() const
{
    return street;
}

const HouseNumber &Address::getHouseNumber() const
{
    return house_number;
}

const std::optional<FlatNumber> &Address::getFlatNumber() const
{
    return flat_number;
}

const City &Address::getCity() const
{
    return city;
}

const Municipality &Address::getMunicipality() const
{
    return municipality;
}

const PostCode &Address::getPostCode() const
{
    return post_code;
}

const std::optional<Country> &Address::getCountry() const
{
    return country;
}

const std::optional<County> &Address::getCounty() const
{
    return county;
}

const std::optional<Province> &Address::getProvice() const
{

    return provice;
}

bool Address::getDelivery()
{
    return delivery;
}

Address::Address(int _id, const Street& _street, const HouseNumber& _houseNumber, const std::optional<FlatNumber>& _flatNumber,
                 const City& _city, const Municipality& _municipality, const PostCode& _postCode,
                 const std::optional<Country>& _country, const std::optional<County>& _county, const std::optional<Province>& _provice, bool _delivery) :
    id(_id),
    street(_street),
    house_number(_houseNumber),
    flat_number(_flatNumber),
    city(_city),
    municipality(_municipality),
    post_code(_postCode),
    country(_country),
    county(_county),
    provice(_provice),
    delivery(_delivery)
{}

int Address::getId() const
{
    return id;
}

Address::Address() :
    flat_number(std::nullopt),
    country(std::nullopt),
    county(std::nullopt),
    provice(std::nullopt)
{

}

}
