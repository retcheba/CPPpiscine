/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:12:19 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/15 16:19:31 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{

public:

//	Constructor & Destructor
	PhoneBook(void);
	~PhoneBook(void);

	void	add_contact(void);
	void	search_contact(void);

private:

	Contact	contacts[8];
	static int	nb_contact;

};

#endif