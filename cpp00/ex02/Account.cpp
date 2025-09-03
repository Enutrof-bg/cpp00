#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	 _amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int temp = _amount;
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << temp 
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	int temp = _amount;
	if (withdrawal <= _amount)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount = _amount - withdrawal;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << temp 
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << temp 
			<< ";withdrawal:refused" << std::endl;
		return false;
	}
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount 
			<< ";deposits:" << _nbDeposits 
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t epoch = std::time(0);
	std::tm *time = std::localtime(&epoch);

	std::cout << "["
			<< time->tm_year + 1900
			<< std::setfill('0') << std::setw(2) << time->tm_mon
			<< std::setfill('0') << std::setw(2) << time->tm_mday
			<< "_"
			<< std::setfill('0') << std::setw(2) << time->tm_hour
			<< std::setfill('0') << std::setw(2) << time->tm_min
			<< std::setfill('0') << std::setw(2) << time->tm_sec
			<< "] ";
}
