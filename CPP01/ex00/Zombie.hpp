/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:20:09 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/27 16:54:12 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{

public:

	Zombie( std::string name );
	~Zombie( void );

	void	announce( void ) const;

private:

	std::string	_name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif