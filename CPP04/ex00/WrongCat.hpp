/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:45:25 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:10:23 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

	WrongCat( void );
	WrongCat( WrongCat const & src );
	~WrongCat( void );

	WrongCat &	operator=( WrongCat const & rhs );
	void		makeSound( void ) const;

private:

};

#endif