/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:20:09 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/27 17:23:45 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{

public:

	Zombie( void );
	~Zombie( void );

	void	set_name( std::string name );
	void	announce( void ) const;

private:

	std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif