#ifndef PHONEEXCEPTION_H
#define PHONEEXCEPTION_H

#include <exception>

class PhoneException final : public std::exception
{
public:
    PhoneException();

    const char* what() const noexcept override;
};

#endif // PHONEEXCEPTION_H
