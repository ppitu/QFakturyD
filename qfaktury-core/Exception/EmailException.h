#ifndef EMAILEXCEPTION_H
#define EMAILEXCEPTION_H

#include <exception>

class EmailException final : public std::exception
{
public:
    EmailException();

    const char* what() const noexcept override;
};

#endif // EMAILEXCEPTION_H
