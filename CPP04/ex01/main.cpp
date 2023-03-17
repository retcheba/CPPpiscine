/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:00 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/17 19:44:34 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const Cat*	cat = new Cat("lol");
	const Cat*	catCopy = new Cat(*cat);
	const Dog*	dog = new Dog("mdr");
	const Dog*	dogCopy = new Dog(*dog);
	
	std::cout << std::endl;
	
	std::cout << cat->getType() << " ideas:" << std::endl;
	cat->getBrain();
	
	std::cout << std::endl;

	delete cat;

	std::cout << std::endl;
	
	std::cout << catCopy->getType() << " copy ideas:" << std::endl;
	catCopy->getBrain();

	std::cout << std::endl;

	std::cout << dog->getType() << " ideas:" << std::endl;
	dog->getBrain();

	std::cout << std::endl;

	delete dog;
	
	std::cout << std::endl;
	
	std::cout << dogCopy->getType() << " copy ideas:" << std::endl;
	dogCopy->getBrain();

	std::cout << std::endl;

	delete dogCopy;
	delete catCopy;
	
	return 0;
}