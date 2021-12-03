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

class Contractor
{
public:
    Contractor();
    Contractor(const QString &name, const NIP &nip, const Address &address, std::optional<QString> bankAccount, std::optional<Phone> phone, std::optional<Email> email, std::optional<QString> www);

    const QString &getName() const;
    void setName(const QString &newName);
    const NIP &nip() const;
    void setNip(const NIP &newNip);
    const Address &getAddress() const;
    void setAddress(const Address& newAddress);
    const std::optional<QString>& bankAccount() const;
    void setBankAccount(std::optional<QString> newBankAccount);
    const std::optional<Phone>& phone() const;
    void setPhone(std::optional<Phone> newPhone);
    const std::optional<Email>& email() const;
    void setEmail(std::optional<Email> newEmail);
    const std::optional<QString>& www() const;
    void setWww(std::optional<QString> newWww);

private:
    QString name_;
    NIP nip_;
    Address address;
    std::optional<QString> bankAccount_;
    std::optional<Phone> phone_;
    std::optional<Email> email_;
    std::optional<QString> www_;

};

Q_DECLARE_METATYPE(Contractor);

#endif // CONTRACTOR_H
