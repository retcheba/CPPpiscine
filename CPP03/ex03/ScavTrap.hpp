/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:00:42 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/13 12:40:33 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{

public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap &	operator=( ScavTrap const & rhs );
	void		attack( const std::string& target );
	void 		guardGate( void );

private:

};

#endif