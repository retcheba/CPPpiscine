/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:44:35 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/20 23:44:06 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

public:

	Character( void );
	Character( std::string const & name );
	Character( Character const & src );
	~Character( void );

	Character &				operator=( Character const & rhs );
	std::string const &		getName() const;
	void					equip(AMateria* m);
	void					unequip(int idx);
	void					use(int idx, ICharacter& target);

private:

	std::string	_name;
	AMateria	*_items[4];
	AMateria	*_trash[42];

};

#endif