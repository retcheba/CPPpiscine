/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:44:07 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:09:34 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{

public:

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );

	Dog &	operator=( Dog const & rhs );
	void	makeSound( void ) const;

private:

};

#endif