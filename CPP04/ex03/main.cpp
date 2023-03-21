/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:26:45 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/21 01:29:05 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

int	main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl;

	Character* me = new Character("me");

	Character* toto = new Character(*me);

	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl;

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;

	toto->use(0, *bob);

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	std::cout << std::endl;

	delete toto;
	delete bob;

	std::cout << std::endl;

	delete me;

	std::cout << std::endl;

	delete src;
	
	return 0;
}