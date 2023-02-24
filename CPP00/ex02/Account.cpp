/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:10:28 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/24 20:28:00 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[" << TIMESTAMP << "] "; 
	return;
}

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << \
		";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << \
		";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

int		Account::checkAmount( void ) const
{
	if (this->_amount < 0)
		return 1;
	return 0;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << \
		deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = this->_amount;
	this->_amount -= withdrawal;
	Account::_displayTimestamp();
	if (Account::checkAmount())
	{
		this->_amount += withdrawal;
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
		return (0);
	}
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << \
		withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}
