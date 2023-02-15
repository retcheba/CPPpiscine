/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:12:11 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/15 19:15:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{

public:

//	Constructor & Destructor
	Contact(void);
	~Contact(void);

	void	set_contact(int nb_contact);
	void	get_contact(void) const;
	void	get_complete_contact(std::string index) const;

private:

	int	index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

};

#endif