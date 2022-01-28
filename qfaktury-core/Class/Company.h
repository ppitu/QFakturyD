#ifndef COMPANY_H
#define COMPANY_H

#include <QString>

#include "TypeClass/NIP.h"
#include "TypeClass/Regon.h"
#include "TypeClass/Phone.h"
#include "TypeClass/Email.h"
#include "Address.h"
#include "BankAccount.h"

namespace qfaktury::core
{

class Company final
{
public:
    Company();
    Company(const QString& _name, const std::optional<NIP>& _nip, const std::optional<Regon>& _regon, const std::optional<Phone>& _phone,
            const std::optional<Email>& _email, const std::optional<Address>& _address, const std::optional<BankAccount>& _bank_account);

    const QString& getName() const;
    const std::optional<NIP>& getNIP() const;
    const std::optional<Regon>& getRegon() const;
    const std::optional<Phone>& getPhone() const;
    const std::optional<Email>& getEmail() const;
    const std::optional<Address>& getAddress() const;
    const std::optional<BankAccount>& getBankAccount() const;

private:
    QString name{};
    std::optional<NIP> nip{};
    std::optional<Regon> regon{};
    std::optional<Phone> phone{};
    std::optional<Email> email{};
    std::optional<Address> address{};
    std::optional<BankAccount> bank_account{};
};

}

#endif // COMPANY_H
