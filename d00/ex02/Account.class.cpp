#include "Account.class.hpp"
#include <string.h>
#include <iostream>
#include <time.h>

int Account::_totalNbDeposits = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    _accountIndex = _nbAccounts; 
    _nbAccounts++;
    _amount = initial_deposit;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    if (_nbAccounts == 0)
        _totalAmount = initial_deposit;
    else
        _totalAmount += initial_deposit;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _nbDeposits++;
    this->_totalNbDeposits++;
    _displayTimestamp();
    _amount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:" <<  _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (_amount >= withdrawal)
    {
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        this->_totalNbWithdrawals++;
        _amount = _amount - withdrawal;
        std::cout << "index:" << _accountIndex << ";p_amount:" <<  _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" <<  _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
    else
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" <<  _amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout <<  "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout <<  "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits <<  ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getTotalAmount( void )
{
    return  (_totalAmount);
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int		Account::checkAmount( void )const
{
    return (_totalAmount);
}

void	Account::_displayTimestamp( void )
{
    char buffer[100];
    time_t now;
    struct tm *timeinfo;

    time (&now);
    timeinfo = localtime(&now);

    strftime(buffer,sizeof(buffer),"%Y%m%d_%H%M%S",timeinfo);
    std::cout << "[" << buffer << "] ";
}