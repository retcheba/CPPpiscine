/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:51:08 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/28 14:38:16 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{

public:

	Weapon( std::string type );
	~Weapon( void );

	void				setType( std::string );
	std::string const &	getType( void ) const;

private:

	std::string	_type;

};

#endif