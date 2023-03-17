/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:44:07 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/17 19:26:00 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

public:

	Dog( void );
	Dog( std::string idea );
	Dog( Dog const & src );
	~Dog( void );

	Dog &	operator=( Dog const & rhs );
	void	makeSound( void ) const;
	void	getBrain( void ) const;

private:

	Brain*	_brain;

};

#endif