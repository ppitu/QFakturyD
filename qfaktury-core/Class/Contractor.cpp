#include "Contractor.h"

const QString &Contractor::getName() const
{
    return name_;
}

void Contractor::setName(const QString &newName)
{
    name_ = newName;
}

const NIP &Contractor::nip() const
{
    return nip_;
}

void Contractor::setNip(const NIP &newNip)
{
    nip_ = newNip;
}

const std::optional<QString>& Contractor::bankAccount() const
{
    return bankAccount_;
}

void Contractor::setBankAccount(std::optional<QString> newBankAccount)
{
    bankAccount_ = newBankAccount;
}

const std::optional<Phone>& Contractor::phone() const
{
    return phone_;
}

void Contractor::setPhone(std::optional<Phone> newPhone)
{
    phone_ = newPhone;
}

const std::optional<Email>& Contractor::email() const
{
    return email_;
}

void Contractor::setEmail(std::optional<Email> newEmail)
{
    email_ = newEmail;
}

const std::optional<QString>& Contractor::www() const
{
    return www_;
}

void Contractor::setWww(std::optional<QString> newWww)
{
    www_ = newWww;
}

Contractor::Contractor(const QString &name, const NIP &nip, const Address &address, std::optional<QString> bankAccount,
                       std::optional<Phone> phone, std::optional<Email> email, std::optional<QString> www) :
    name_(name),
    nip_(nip),
    address(address),
    bankAccount_(std::move(bankAccount)),
    phone_(std::move(phone)),
    email_(std::move(email)),
    www_(std::move(www))
{}

Contractor::Contractor() :
    name_(""),
    bankAccount_(std::nullopt),
    phone_(std::nullopt),
    email_(std::nullopt),
    www_(std::nullopt)
{

}
