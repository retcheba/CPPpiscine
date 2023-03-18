/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:54:48 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/17 19:40:44 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{

public:

	Brain( void );
	Brain( std::string idea );
	Brain( Brain const & src );
	virtual ~Brain( void );

	Brain &		operator=( Brain const & rhs );
	void		PrintAllIdeas( void ) const;

private:

	std::string	_ideas[100];

};

#endif