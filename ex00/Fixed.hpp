/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:38:37 by nmedeiro          #+#    #+#             */
/*   Updated: 2024/11/13 16:48:07 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:

    public:
        Fixed(); //Default constructor
        Fixed(const Fixed &fixed); //Copy constructor
        Fixed& operator=(const Fixed& fixed); //Copy assignment operator
        ~Fixed(); //Destructor
};

#endif