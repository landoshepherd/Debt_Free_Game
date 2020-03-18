//
//  acct_unittests.hpp
//  Debt_Free_Game
//
//  Created by Lando Shepherd on 12/24/19.
//  Copyright © 2019 Lando Shepherd. All rights reserved.
//

#ifndef acct_unittests_hpp
#define acct_unittests_hpp

#include <iostream>
#include <vector>
#include <string>

#include <assert.h>
#include "account.hpp"

class AccountTest
{
private:
	AccountTest() = default;
	~AccountTest() = default;

public:
	static void RUN_ACCT_TEST()
	{
		RUN_DEPOSIT_TESTS();
		std::cout << "ALL ACCOUNT UNITS: PASS" << std::endl;
	}

private:
	static void RUN_DEPOSIT_TESTS()
	{
		std::string PASS("DEPOSIT TEST - 1: PASS");
		std::string FAIL("DEPOSIT TEST - 1: FAIL");
		double amount(200.00);
		std::string name("savings");
		Account acct(name, amount);

		acct.deposit(300.00);
		assert(acct.getAcctBalance()==500);
	}
};
#endif
