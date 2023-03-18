/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:46 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/18 19:40:26 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

public:

	Cat( void );
	Cat( std::string idea );
	Cat( Cat const & src );
	~Cat( void );

	Cat &	operator=( Cat const & rhs );
	void	makeSound( void ) const;
	void	getBrain( void ) const;

private:

	Brain*	_brain;

};

#endif