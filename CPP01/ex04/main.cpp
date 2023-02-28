/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:17:34 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/28 20:25:03 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static std::string	ft_replace_occurence(std::string str, std::string s1, std::string s2, unsigned int& occur)
{	
	std::size_t found = str.find(s1);
	
	if (found!=std::string::npos)
	{
		occur += 1;
		str.erase(found, s1.length());
		str.insert(found, s2);
	}
	
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string	ifsName = (std::string)argv[1];
	std::string s1 = (std::string)argv[2];
	std::string s2 = (std::string)argv[3];

	if (ifsName.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error one of the arguments is empty" << std::endl;
		return 1;
	}

	std::ifstream	ifs;
	ifs.open(ifsName.c_str());

	if (!ifs.is_open())
	{
		std::cout << "Error while opening the input file" << std::endl;
		return 1;
	}	
	
	std::string		ofsName;
	std::ofstream	ofs;

	ofsName.append(argv[1]);
	ofsName.append(".replace");
		
	ofs.open(ofsName.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error while opening the output file" << std::endl;
		ifs.close();
		return 1;
	}	
	
	std::string	str;
	unsigned int occur = 0;

	while (getline(ifs, str))
	{
		str = ft_replace_occurence(str, s1, s2, occur);
		ofs << str << std::endl;
	}

	std::cout << occur << " occurences find " << std::endl;

	ofs.close();
	ifs.close();
	return 0;
}