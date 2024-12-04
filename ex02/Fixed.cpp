/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:38:19 by nmedeiro          #+#    #+#             */
/*   Updated: 2024/12/04 16:15:49 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->number = 0;
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    this->number = number << fNumber;
    // this->number = roundf(number * (1 << this->fNumber));
    //std::cout << "Constructor with const int as parameter called" << std::endl;
}

Fixed::Fixed(const float  floatNumber)
{
    // this->number = roundf(floatNumber * (1 << fNumber));
    this->number = static_cast<int>(floatNumber * (1 << fNumber));
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    number = fixed.number;
    //std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        number = fixed.number;
    return (*this);
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
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
    // Fixed   result;

    // result.setRawBits(this->number + fixed.getRawBits());
    return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& fixed)
{
    // Fixed   result;

    // result.setRawBits(this->number - fixed.getRawBits());
    return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed& fixed)
{
    // Fixed   result;

    // result.setRawBits(this->number * fixed.getRawBits());
    return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& fixed)
{
    // Fixed   result;

    // result.setRawBits(this->number / fixed.getRawBits());
    return (this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++()
{
    this->number++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed   tmp = *this;
    
    ++this->number;
    return (tmp);
}

Fixed Fixed::operator--()
{
    this->number--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    
    --this->number;
    return (tmp);
}

Fixed Fixed::min(Fixed& number1, Fixed& number2)
{
    if (number1.number < number2.number)
        return(number1);
    return (number2);
}

Fixed Fixed::max(Fixed& number1, Fixed& number2)
{
    if (number1.number > number2.number)
        return(number1);
    return (number2);
}
const Fixed Fixed::min(const Fixed& number1, const Fixed& number2)
{
    if (number1.number < number2.number)
        return(number1);
    return (number2);
}
const Fixed Fixed::max(const Fixed& number1, const Fixed& number2)
{
    if (number1.number > number2.number)
        return(number1);
    return (number2);
}
