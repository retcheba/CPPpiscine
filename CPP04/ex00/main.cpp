/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:00 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:10:50 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal*			animal = new Animal();
	const Animal*			cat = new Cat();
	const Animal*			dog = new Dog();
	const WrongAnimal*	wronganimal = new WrongAnimal();
	const WrongAnimal*	wrongcat = new WrongCat();
	
	std::cout << std::endl;
	
	std::cout << animal->getType() << ": ";
	animal->makeSound();

	std::cout << cat->getType() << ": ";
	cat->makeSound();

	std::cout << dog->getType() << ": ";
	dog->makeSound();

	std::cout << wronganimal->getType() << ": ";
	wronganimal->makeSound();

	std::cout << wrongcat->getType() << ": ";
	wrongcat->makeSound();
	
	std::cout << std::endl;

	delete dog;
	delete cat;
	delete animal;
	delete wrongcat;
	delete wronganimal;
	
	return 0;
}