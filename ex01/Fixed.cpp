/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:38:19 by nmedeiro          #+#    #+#             */
/*   Updated: 2024/11/20 13:15:20 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): number(0)
{
    // this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    this->number = number << fNumber;
    std::cout << "Constructor with const int as parameter called" << std::endl;
}

Fixed::Fixed(const float  floatNumber)
{
    // this->number = roundf(floatNumber);
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