//
//  account.hpp
//  Debt_Free_Game
//
//  Created by Lando Shepherd on 12/23/19.
//  Copyright © 2019 Lando Shepherd. All rights reserved.
//

#ifndef account_hpp
#define account_hpp

#include <string>

class Account
{
public:
	
	//! Default Constructor
	Account();

	/*!
		Constructor that takes account name and starting balance

		\param[in] p_acctName name of the account.
		\param[in] p_balance initial balance of the account.
	*/
	Account(std::string& p_acctName, double& p_balance);

	//! Default Destructor
	~Account();

	/*!
		Takes in an amount and adds to account balance.

		\param[in] p_amount amount of funds to add to account balance.
	*/
	void deposit(const double& p_amount);

	/*!
		Accepts an amount and subtracts from account balance.

		\param[in] p_amount amount of funds to withdraw from account balance.
	*/
	void withdraw(const double& p_amount);

	/*!
		Transfers funds from one account to another.

		param[in] p_amount the amount of funds to transfer
		param[in] p_toAcct the account to receive the funds.
	*/
	void transferFunds(const double& p_amount, Account& p_toAcct);

	void updateBalance(const double& newBalance);

	/*!
		Returns current account balance.
	*/
	double getAcctBalance();

	void setAcctName(const std::string& p_acctName);

	/*!
		Returns account name;
	*/
	std::string getAcctName();

protected:
	std::string m_acctName;
	double m_acctBalance;

};

#endif /* account_hpp */
