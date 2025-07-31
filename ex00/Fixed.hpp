/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/13 16:38:37 by nmedeiro      #+#    #+#                 */
/*   Updated: 2025/07/31 15:52:48 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int                 value;
        static const int    fractionalBits = 8;
    public:
        Fixed(); //Default constructor
        Fixed(const Fixed &fixed); //Copy constructor
        Fixed& operator=(const Fixed& fixed); //Copy assignment operator
        ~Fixed(); //Destructor

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
