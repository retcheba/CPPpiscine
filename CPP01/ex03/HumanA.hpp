/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:49:57 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/28 14:42:01 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{

public:

	HumanA( std::string name, Weapon const & weapon );
	~HumanA( void );

	void	attack( void );

private:

	std::string		_name;
	Weapon const &	_weapon;

};

#endif