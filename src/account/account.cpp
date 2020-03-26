//
//  account.cpp
//  Debt_Free_Game
//
//  Created by Lando Shepherd on 12/23/19.
//  Copyright © 2019 Lando Shepherd. All rights reserved.
//

#include <iostream>
#include "account.hpp"

Account::Account():
	m_acctName(),
	m_acctBalance()
{

}

Account::~Account()
{

}

void Account::deposit(const double& p_amount)
{
	m_acctBalance += p_amount;
}

void Account::withdraw(const double& p_amount)
{
	if (p_amount > m_acctBalance)
	{
		std::cout << "Insufficient funds." << std::endl;
		return;
	}

	m_acctBalance -= p_amount;
}

void Account::transferFunds(const double& p_amount, Account& p_toAcct)
{
	if (m_acctBalance < p_amount)
	{
		std::cout << "Insufficient funds." << std::endl;
		return;
	}
	m_acctBalance -= p_amount;
	p_toAcct.m_acctBalance += p_amount;
}

void Account::updateBalance(const double& newBalance)
{
	m_acctBalance = newBalance;
}

double Account::getAcctBalance()
{
	return m_acctBalance;
}

void Account::setAcctName(const std::string& p_acctName)
{
	m_acctName = p_acctName;
}
std::string Account::getAcctName()
{
	return m_acctName;
}
