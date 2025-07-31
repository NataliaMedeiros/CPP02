/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/13 16:38:19 by nmedeiro      #+#    #+#                 */
/*   Updated: 2025/07/31 17:09:44 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _value(fixed._value)
{
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        _value = fixed._value;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number) : _value(number << _fractionalBits)
{
    std::cout << "Constructor with const int as parameter called" << std::endl;
}

Fixed::Fixed(const float  floatNumber) : _value(roundf(floatNumber * (1 << _fractionalBits)))
{
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float   Fixed::toFloat() const
{
    return (static_cast<float>(this->_value) / (1 << _fractionalBits));
}

int Fixed::toInt() const
{
    return (this->_value >> _fractionalBits);
    // It shifts the bits to the right. Works to _value signed integer
}

std::ostream& operator<<(std::ostream& os, const Fixed& object)
{
    return (os << object.toFloat());
}
