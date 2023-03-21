/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:13:24 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/21 00:06:35 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

public:

	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	~MateriaSource( void );

	MateriaSource &		operator=( MateriaSource const & rhs );
	void				learnMateria(AMateria* m);
	AMateria*			createMateria(std::string const & type);

private:

AMateria*	_items[4];

};

#endif
