/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:07:43 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 22:05:30 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ab[2] = { (b.getX() - a.getX()), (b.getY() - a.getY()) };
	Fixed	bc[2] = { (c.getX() - b.getX()), (c.getY() - b.getY()) };
	Fixed	ca[2] = { (a.getX() - c.getX()), (a.getY() - c.getY()) };
	Fixed	ap[2] = { (point.getX() - a.getX()), (point.getY() - a.getY()) };
	Fixed	bp[2] = { (point.getX() - b.getX()), (point.getY() - b.getY()) };
	Fixed	cp[2] = { (point.getX() - c.getX()), (point.getY() - c.getY()) };
	Fixed	ab_cross_ap( ab[0] * ap[1] - ab[1] * ap[0] );
	Fixed	bc_cross_bp( bc[0] * bp[1] - bc[1] * bp[0] );
	Fixed	ca_cross_cp( ca[0] * cp[1] - ca[1] * cp[0] );

	if ( ( ab_cross_ap > 0 && bc_cross_bp > 0 && ca_cross_cp > 0 )
	||   ( ab_cross_ap < 0 && bc_cross_bp < 0 && ca_cross_cp < 0 ) )
		return 1;

	return 0;
}