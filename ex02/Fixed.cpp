/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/13 16:38:19 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/12/03 19:12:41 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    this->number = number << fNumber;
    // this->number = roundf(number * (1 << this->fNumber));
    std::cout << "Constructor with const int as parameter called" << std::endl;
}

Fixed::Fixed(const float  floatNumber)
{
    // this->number = roundf(floatNumber * (1 << fNumber));
    this->number = static_cast<int>(floatNumber * (1 << fNumber));
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    number = fixed.number;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        number = fixed.number;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->number);
}

void Fixed::setRawBits(int const raw)
{
    this->number = raw;
}

float   Fixed::toFloat() const
{
    return (static_cast<float>(this->number) / (1 << fNumber));
}

int Fixed::toInt() const
{
    return (this->number >> fNumber);
    // return (round(this->number));
}

std::ostream& operator<<(std::ostream& os, const Fixed& object)
{
    os << object.toFloat();
    return (os);
}

bool Fixed::operator>(const Fixed& fixed)
{
    if (this->number > fixed.number)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& fixed)
{
    if (this->number >= fixed.number)
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed& fixed)
{
     if (this->number < fixed.number)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& fixed)
{
     if (this->number <= fixed.number)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& fixed)
{
     if (this->number == fixed.number)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& fixed)
{
     if (this->number != fixed.number)
        return (true);
    return (false);
}

Fixed Fixed::operator+(const Fixed& fixed)
{
    Fixed   result;

    result.setRawBits(this->number + fixed.getRawBits());
    return (result);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
    Fixed   result;

    result.setRawBits(this->number - fixed.getRawBits());
    return (result);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
    Fixed   result;

    result.setRawBits(this->number * fixed.getRawBits());
    return (result);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
    Fixed   result;

    result.setRawBits(this->number / fixed.getRawBits());
    return (result);
}

Fixed Fixed::operator++()
{
    this->number += 1;
    return (*this);
}

Fixed Fixed::operator++(int value)
{
    this->number += value;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->number -= 1;
    return (*this);
}

Fixed Fixed::operator--(int value)
{
    this->number -= value;
    return (*this);
}

Fixed Fixed::min(Fixed& nunber1, Fixed& number2)
{

}

Fixed Fixed::max(Fixed& nunber1, Fixed& number2)
{

}
const Fixed Fixed::min(const Fixed& nunber1, const Fixed& number2)
{

}
const Fixed Fixed::max(const Fixed& nunber1, const Fixed& number2)
{

}
