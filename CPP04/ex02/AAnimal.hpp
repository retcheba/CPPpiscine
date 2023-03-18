/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:26 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/18 19:35:16 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{

public:

	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const & src );
	virtual ~AAnimal( void );

	AAnimal &		operator=( AAnimal const & rhs );
	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;

protected:

	std::string	_type;

private:

};

#endif