/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/13 16:38:37 by nmedeiro      #+#    #+#                 */
/*   Updated: 2025/07/31 17:13:54 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
        int                 _value;
        static const int    _fractionalBits = 8;

    public:
        Fixed();//Default constructor
        Fixed(const int intNumber);
        Fixed(const float floatNumber);
        Fixed(const Fixed &fixed); //Copy constructor
        Fixed& operator=(const Fixed& fixed); //Copy assignment operator
        ~Fixed(); //Destructor

        bool operator>(const Fixed& fixed);
        bool operator>=(const Fixed& fixed);
        bool operator<(const Fixed& fixed);
        bool operator<=(const Fixed& fixed);
        bool operator==(const Fixed& fixed);
        bool operator!=(const Fixed& fixed);

        Fixed operator+(const Fixed& fixed);
        Fixed operator-(const Fixed& fixed);
        Fixed operator*(const Fixed& fixed1);
        Fixed operator/(const Fixed& fixed);

        Fixed operator++();
        Fixed operator++(int value);
        Fixed operator--();
        Fixed operator--(int value);

        static Fixed min(Fixed& nunber1, Fixed& number2);
        static Fixed max(Fixed& nunber1, Fixed& number2);
        static const Fixed min(const Fixed& nunber1, const Fixed& number2);
        static const Fixed max(const Fixed& nunber1, const Fixed& number2);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& object);

#endif
