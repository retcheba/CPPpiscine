/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:25:07 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 20:14:53 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

class	Base { public: virtual ~Base( void ) {} };
class	A: public Base {};
class	B: public Base {};
class	C: public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int	main( void )
{
	Base*	mdr = generate();
	Base&	lol = *mdr;

	if ( mdr != NULL )
	{
		identify(mdr);
		identify(lol);
	}

	delete mdr;
	return 0;
}

Base*	generate(void)
{
	Base*	base;
	
	std::srand((unsigned) std::time(NULL));
	int random = std::rand() % 3;

	if (random == 0)
		base = new A;
	else if (random == 1)
		base = new B;
	else if (random == 2)
		base = new C;
	else
		base = NULL;

	return base;
}

void	identify(Base* p)
{
	A*	a = dynamic_cast<A*>(p);
	if ( a != NULL )
	{
		std::cout << "The real object pointed by p is of type A" << std::endl;
		return;
	}
	B*	b = dynamic_cast<B*>(p);
	if ( b != NULL )
	{
		std::cout << "The real object pointed by p is of type B" << std::endl;
		return;
	}
	C*	c = dynamic_cast<C*>(p);
	if ( c != NULL )
	{
		std::cout << "The real object pointed by p is of type C" << std::endl;
		return;
	}
}

void	identify(Base& p)
{
	try {
		A&	a = dynamic_cast<A&>(p);
		std::cout << "The real object pointed by p is of type A" << std::endl;
		(void)a;
		return;
	}
	catch( std::exception& e ) {}
	try {
		B&	b = dynamic_cast<B&>(p);
		std::cout << "The real object pointed by p is of type B" << std::endl;
		(void)b;
		return;
	}
	catch( std::exception& e ) {}
	try {
		C&	c = dynamic_cast<C&>(p);
		std::cout << "The real object pointed by p is of type C" << std::endl;
		(void)c;
		return;
	}
	catch( std::exception& e ) {}
}
