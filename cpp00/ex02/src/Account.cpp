/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:15:54 by amakela           #+#    #+#             */
/*   Updated: 2024/08/30 18:27:18 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
    return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout
    << "accounts:" << getNbAccounts()
    << ";total:" << getTotalAmount()
    << ";deposits:" << getNbDeposits()
    << ";withdrawals:" << getNbWithdrawals()
    << std::endl;
}

Account::Account( void ) {}

Account::Account( int initial_deposit ) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";created" << std::endl;
}

Account::~Account( void ) {
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    std::cout
    << "index:" << _accountIndex
    << ";p_amount" << _amount
    << ";deposit:" << deposit;
    _amount += deposit;
    _nbDeposits++;
    std::cout
    << ";amount:" << _amount
    << ";nb_deposits:" << _nbDeposits
    << std::endl;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _displayTimestamp();
    std::cout
    << "index:" << _accountIndex
    << ";p_amount:" << _amount
    << ";withdrawal:";
    if (_amount < withdrawal) {
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    std::cout << withdrawal
    << ";amount:" << _amount
    << ";nb_withdrawals:" << _nbWithdrawals
    << std::endl; 
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount( void ) const {
    return (_amount);
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout
    << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals
    << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::time_t t = time(nullptr);
    char        timestr[18];

    strftime(timestr, sizeof(timestr), "[%Y%m%d_%H%M%S]", localtime(&t));
    std::cout << timestr << " ";
}
