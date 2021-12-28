#ifndef NIPEXCEPTION_H
#define NIPEXCEPTION_H

#include <exception>

class NIPException final : public std::exception
{
public:
    NIPException();

    const char* what() const noexcept override;
};

#endif // NIPEXCEPTION_H
