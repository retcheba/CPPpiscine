/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:27:45 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/18 18:07:21 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main( void )
{
	std::cout << "TEST 1:" << std::endl;
	{
		MutantStack<int> mstack;
		
		mstack.push(17);
		mstack.push(5);
		
		std::cout << "top: " << mstack.top() << std::endl;
		
		mstack.pop();
		
		std::cout << "size: " << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(42);
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}

	std::cout << std::endl << "TEST 2:" << std::endl;
	{
		MutantStack<int> mstack;
		
		std::cout << "empty: " << mstack.empty() << std::endl;
		
		mstack.push(5);
		mstack.push(4);
		
		std::cout << "empty: " << mstack.empty() << std::endl;
	}
	return 0;
}