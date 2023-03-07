/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:26:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/06 14:16:44 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{

public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs );
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

private:

	int					_nb;
	static int const 	bits;

};

#endif