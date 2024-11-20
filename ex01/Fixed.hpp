/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:38:37 by nmedeiro          #+#    #+#             */
/*   Updated: 2024/11/20 13:12:34 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
        int                 number;
        static const int    fNumber = 8;
    public:
        Fixed();//Default constructor
        Fixed(const int number);
        Fixed(const float floatNumber);
        Fixed(const Fixed &fixed); //Copy constructor
        Fixed& operator=(const Fixed& fixed); //Copy assignment operator
        ~Fixed(); //Destructor

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif