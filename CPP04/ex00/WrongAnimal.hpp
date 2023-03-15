/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:44:49 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:09:59 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{

public:

	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const & src );
	virtual ~WrongAnimal( void );

	WrongAnimal &	operator=( WrongAnimal const & rhs );
	void			makeSound( void ) const;
	std::string		getType( void ) const;

protected:

	std::string	_type;

private:

};

#endif