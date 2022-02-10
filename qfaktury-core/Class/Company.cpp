#include "Company.h"

namespace qfaktury::core
{

Company::Company()
{

}

const int Company::getId() const
{
    return id;
}

Company::Company(int _id, const QString& _name, const std::optional<NIP>& _nip, const std::optional<Regon>& _regon, const std::optional<Phone>& _phone,
                 const std::optional<Email>& _email, const std::optional<Address>& _address, const std::optional<BankAccount>& _bank_account) :
    id(_id),
    name(_name),
    nip(_nip),
    regon(_regon),
    phone(_phone),
    email(_email),
    address(_address),
    bank_account(_bank_account)
{

}

const QString &Company::getName() const
{
    return name;
}

const std::optional<NIP> &Company::getNIP() const
{
    return nip;
}

const std::optional<Regon> &Company::getRegon() const
{
    return regon;
}

const std::optional<Phone> &Company::getPhone() const
{
    return phone;
}

const std::optional<Email> &Company::getEmail() const
{
    return email;
}

const std::optional<Address> &Company::getAddress() const
{
    return address;
}

const std::optional<BankAccount> &Company::getBankAccount() const
{
    return bank_account;
}

}
