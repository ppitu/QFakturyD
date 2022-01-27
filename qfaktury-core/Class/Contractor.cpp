#include "Contractor.h"

namespace qfaktury::core {

const QString &Contractor::getName() const
{
    return name_;
}

const NIP &Contractor::nip() const
{
    return nip_;
}

const std::optional<QString>& Contractor::getBankAccount() const
{
    return bankAccount_;
}

const std::optional<Phone>& Contractor::getPhone() const
{
    return phone_;
}

const std::optional<Email>& Contractor::getEmail() const
{
    return email_;
}

Contractor::Contractor(const QString &name, const NIP &nip, const Address &address, std::optional<QString> bankAccount,
                       std::optional<Phone> phone, std::optional<Email> email) :
    name_(name),
    nip_(nip),
    address(address),
    bankAccount_(std::move(bankAccount)),
    phone_(std::move(phone)),
    email_(std::move(email))
{}

Contractor::Contractor() :
    name_(""),
    bankAccount_(std::nullopt),
    phone_(std::nullopt),
    email_(std::nullopt)
{

}

}
