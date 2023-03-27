/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:06:12 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/27 17:15:03 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

	Form( void );
	Form( std::string name, int gradeToSign, int gradeToExecute );
	Form( Form const & src );
	~Form( void );

	Form &				operator=( Form const & rhs );
	std::string const	getName( void ) const;
	bool				isSigned( void ) const;
	int					getGradeToSign( void ) const;
	int					getGradeToExecute( void ) const;
	void				beSigned( Bureaucrat const & bureaucrat );
	void				execute(Bureaucrat const & executor) const;
	virtual void		executor( void ) const = 0;

	class GradeTooHighException: public std::exception
	{
	public:	
		virtual const char*	what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

private:

	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExecute;

};

std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif