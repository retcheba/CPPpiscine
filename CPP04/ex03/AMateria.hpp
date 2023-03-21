/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:29:52 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/20 23:33:08 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter;

class AMateria
{

public:

	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );
	
	AMateria &				operator=( AMateria const & rhs );
	std::string const & 	getType( void ) const;
	virtual AMateria* 		clone( void ) const = 0;
	virtual void 			use( ICharacter& target );

protected:

	std::string	_type;

};

#endif
