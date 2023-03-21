/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:39:30 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/20 23:13:41 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class ICharacter
{

public:

	virtual 						~ICharacter( void ) {}
	virtual std::string const &		getName( void ) const = 0;
	virtual void					equip( AMateria* m ) = 0;
	virtual void					unequip(int idx) = 0;
	virtual void					use(int idx, ICharacter& target) = 0;

};

#endif
