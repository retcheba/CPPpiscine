/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:13:03 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/20 23:53:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{

public:

	Ice( void );
	Ice( Ice const & src );
	~Ice( void );
	
	Ice &		operator=( Ice const & rhs );
	void 		use( ICharacter& target );
	AMateria*	clone( void ) const;

private:

};

#endif