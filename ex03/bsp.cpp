/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/13 13:17:00 by natalia       #+#    #+#                 */
/*   Updated: 2025/08/13 13:34:13 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area(Point const a, Point const b, Point const c)
{
	//calculate the area of a triangle (using cordinates) with the parallelogram rule
    return (fabsf((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
         b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
         c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a, b, c);
    float A1 = area(point, b, c);
    float A2 = area(a, point, c);
    float A3 = area(a, b, point);

	//if one of the subareas is 0 than the point is on an edge
    if ((A1 == 0 || A2 == 0 || A3 == 0))
	{
        return false;
    }

	//if the sum of the subareas is equal the triangle area, than the point is inside the triangle
    return (A == A1 + A2 + A3);
}
