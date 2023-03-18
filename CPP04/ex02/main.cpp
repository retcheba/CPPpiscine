/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:00 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/18 19:56:40 by retcheba         ###   ########.fr       */
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
	
	std::cout << cat->getType() << " ideas: ";
	cat->makeSound();
	cat->getBrain();
	
	std::cout << std::endl;

	delete cat;

	std::cout << std::endl;
	
	std::cout << catCopy->getType() << " copy ideas: ";
	catCopy->makeSound();
	catCopy->getBrain();

	std::cout << std::endl;

	std::cout << dog->getType() << " ideas: ";
	dog->makeSound();
	dog->getBrain();

	std::cout << std::endl;

	delete dog;
	
	std::cout << std::endl;
	
	std::cout << dogCopy->getType() << " copy ideas: ";
	dogCopy->makeSound();
	dogCopy->getBrain();

	std::cout << std::endl;

	delete dogCopy;
	delete catCopy;
	
	return 0;
}