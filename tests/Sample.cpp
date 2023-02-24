/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:36:21 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/10 17:13:56 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->var = 42;
	std::cout << "this->var: " << this->var << std::endl;

	this->function();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::function(void)
{
	std::cout << "Function called" << std::endl;
	return;
}