#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
};
void	Account::_displayTimestamp( void ) {
	tm	*tp;
	time_t	now;
	
	now = time(0);
	tp = localtime(&now);
	std::cout << "[" << 1900 + tp->tm_year;
	if (tp->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << tp->tm_mon + 1;
	if (tp->tm_mday < 10)
		std::cout << "0";
	std::cout << tp->tm_mday;
	if (tp->tm_hour < 10)
		std::cout << "0";
	std::cout << tp->tm_hour;
	if (tp->tm_min < 10)
		std::cout << "0";
	std::cout << tp->tm_min;
	if (tp->tm_sec < 10)
		std::cout << "0";
	std::cout << tp->tm_sec << "]" << " ";
};
int	Account::getNbAccounts(void) {
	return (_nbAccounts);
};
int	Account::getTotalAmount(void) {
	return (_totalAmount);
};
int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
};
int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
};
void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" <<
		getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
};
void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount <<
		";deposit:" << deposit << ";amount:";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
};
bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount <<  ";withdrawal:";
	if (this->_amount - withdrawal >= 0) {
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
};
int		Account::checkAmount(void) const {
	return (this->_amount);
};
void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";amount:" << this->_amount <<
		";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
};
Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
};
