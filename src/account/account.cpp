//
//  account.cpp
//  Debt_Free_Game
//
//  Created by Lando Shepherd on 12/23/19.
//  Copyright © 2019 Lando Shepherd. All rights reserved.
//

#include <iostream>
#include "account.hpp"

Account::Account(std::string& p_acctName, double& p_balance):
	m_acctName(p_acctName),
	m_acctBalance(p_balance)
{

}

void Account::deposit(const double& p_amount)
{
	m_acctBalance += p_amount;
}

void Account::withdraw(double& p_amount)
{
	if (p_amount > m_acctBalance)
	{
		std::cout << "Insufficient funds." << std::endl;
		return;
	}

	m_acctBalance -= p_amount;
}

void Account::transferFunds(double& p_amount, Account& p_toAcct)
{
	if (m_acctBalance < p_amount)
	{
		std::cout << "Insufficient funds." << std::endl;
		return;
	}
	m_acctBalance -= p_amount;
	p_toAcct.m_acctBalance += p_amount;
}

double Account::getAcctBalance()
{
	return m_acctBalance;
}

std::string Account::getAcctName()
{
	return m_acctName;
}
