/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:37:10 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/25 13:45:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

public:

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat &		operator=( Bureaucrat const & rhs );
	std::string const	getName( void ) const;
	int					getGrade( void ) const;
	void				incrementGrade( void );
	void				decrementGrade( void );

private:

	std::string const	_name;
	int					_grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif