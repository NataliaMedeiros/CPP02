/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/04 16:24:12 by nmedeiro      #+#    #+#                 */
/*   Updated: 2025/08/13 13:16:30 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
    //std::cout << "Default constructor called" << std::endl;
}
Point::Point(const float xValue, const float yValue) : _x(xValue), _y(yValue)
{
    //std::cout << "Constructor com parameters called" << std::endl;
}

Point::Point(const Point &other) : _x(other._x), _y(other._y)
{
    //std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &other)
{
    (void)other;
    return (*this);
}

Point::~Point()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() const
{
    return (_x);
}

Fixed Point::getY() const
{
    return (_y);
}
