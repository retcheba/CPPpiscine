/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:32:50 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/20 23:53:03 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria
{

public:

	Cure( void );
	Cure( Cure const & src );
	~Cure( void );
	
	Cure &		operator=( Cure const & rhs );
	void 		use( ICharacter& target );
	AMateria*	clone( void ) const;

private:

};

#endif