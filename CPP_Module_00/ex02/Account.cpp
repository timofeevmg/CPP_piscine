#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();

	std::cout << "accounts:" << Account::_nbAccounts
		<< ";"
		<< "total:" << Account::_totalAmount
		<< ";"
		<< "deposits:" << Account::_totalNbDeposits
		<< "withdrawals:" << Account::_totalNbWithdrawals
		<< std::endl;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_totalAmount += this->_amount;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";"
		<< "amount:" << this->_amount
		<< ";"
		<< "created"
		<< std::endl;
}

Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";"
		<< "amount:" << this->_amount
		<< ";"
		<< "closed"
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int		tmp = this->_amount;

	this->_amount += deposit;
	this->_nbDeposits++;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";"
		<< "p_amount:" << tmp
		<< ";"
		<< "deposit:" << deposit
		<< ";"
		<< "amount:" << this->_amount
		<< ";"
		<< "nb_deposits:" << this->_nbDeposits
		<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int		tmp = this->_amount;
	bool	op = (withdrawal > this->_amount) ? false : true;

	this->_displayTimestamp();
	if (op)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "index:" << this->_accountIndex
		<< ";"
		<< "p_amount:" << tmp
		<< ";"
		<< "withdrawal:" << withdrawal
		<< ";"
		<< "amount:" << this->_amount
		<< ";"
		<< "nb_withdrawals:" << this->_nbDeposits
		<< std::endl;
	}
	else
	{
		std::cout << "index:" << this->_accountIndex
		<< ";"
		<< "p_amount:" << tmp
		<< ";"
		<< "nb_withdrawals:" << "refused"
		<< std::endl;
	}
	return op;
}

int		Account::checkAmount( void ) const
{
	return (this->_amount < 0) ? 0 : 1;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	t = std::time(0);
	std::tm		*now = std::localtime(&t);

	std::cout << std::setfill('0');
	std::cout << "[" << (1900 + now->tm_year) 
		<< std::setw(2) << now->tm_mon
		<< std::setw(2) << now->tm_mday
		<< "_"
		<< std::setw(2) << now->tm_hour
		<< std::setw(2) << now->tm_min
		<< std::setw(2) << now->tm_sec
		<< "]" << " ";
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex
		<< ";"
		<< "amount:" << this->_amount
		<< ";"
		<< "deposits:" << this->_nbDeposits
		<< ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}
