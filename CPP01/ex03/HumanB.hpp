/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:50:43 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/28 15:01:17 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{

public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void );
	void	setWeapon( Weapon &weapon );

private:

	std::string	_name;
	Weapon*		_weapon;

};

#endif