#ifndef MONEYEXCEPTION_H
#define MONEYEXCEPTION_H

#include <exception>

class MoneyException final : public std::exception
{
public:
    MoneyException();

    const char* what() const noexcept override;
};

#endif // MONEYEXCEPTION_H
