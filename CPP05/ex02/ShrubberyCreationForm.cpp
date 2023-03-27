/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:49:53 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/27 18:22:44 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "ShrubberyCreationForm", 145, 137 ), _target("default_target")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "ShrubberyCreationForm", 145, 137 ), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form( src )
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;

	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::executor( void ) const
{
	std::string		ofsName;
	std::ofstream	ofs;

	ofsName.append(this->_target);
	ofsName.append("_shrubbery");
	
	ofs.open(ofsName.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error while opening the output file" << std::endl;
		return;
	}

	std::string str; 

	str.append("                  ,@@@@@@@,\n");
	str.append("       ,,,.      ,@@@@@@/@@,     .oo8888o.\n");
	str.append("    ,&%%&%&&%   ,@@@@@/@@@@@@,   8888\\88/8o\n");
	str.append("   ,%&\\%&&%&&%  ,@@@@\\@@@/@@@   88\\88888/88'\n");
	str.append("   %&&%&%&/%&&%  @@@\\@@/ /@@@   88888\\88888'\n");
	str.append("   %&&%/ %&%%&&   @@\\ V /@@'    `88\\8 `/88'\n");
	str.append("   `&%\\ ` /%&'       | |          '8\\ |8'\n");
	str.append("       | |           | |            | |\n");
	str.append("       | |           | |            | |\n");
	str.append("    __/   \\_________/   \\__________/   \\____\n");

	ofs << str;

	ofs.close();

	return;
}
