/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:21:59 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 18:43:46 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{

public:

	Serializer( Serializer const & src );
	~Serializer( void );

	Serializer &		operator=( Serializer const & rhs );
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

private:

	Serializer( void );

};

#endif