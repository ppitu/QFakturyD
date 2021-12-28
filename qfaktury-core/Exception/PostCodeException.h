#ifndef POSTCODEEXCEPTION_H
#define POSTCODEEXCEPTION_H

#include <exception>

class PostCodeException final : public std::exception
{
public:
    PostCodeException();

    const char* what() const noexcept override;
};

#endif // POSTCODEEXCEPTION_H
