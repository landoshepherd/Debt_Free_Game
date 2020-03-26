#ifndef player_hpp
#define player_hpp

#include <memory>
#include <string>
#include <vector>
#include "../account/account.hpp"


class Player
{
	public:
		Player();
		~Player();
		std::string getJobTitle();
		void updateJobTitle(const std::string& jobTitle);
		int getSalary();
		void updateSalary(const int& p_salary);
		//std::vector<Account*> getExpenses();
		//void addExpense(Expense& newExpense);
		std::vector< std::shared_ptr<Account> > getSavingsAccts();
		void addSavingsAccount(const std::shared_ptr<Account>& newAccount);
		//std::shared_ptr<RetirementAcct> getRetirementAcct();
		//std::vector<Account*> getAllDebt();
		//void addDebt(Account& newDebt);
		//void removeDebt(Account& debt);

	private:
		std::string m_jobTitle;
		int m_salary;
		//std::vector<Account*> m_expenses;
		std::vector< std::shared_ptr<Account> > m_savingsAccts; //To include retirement
		//RetirementAcct m_retirementAcct;
		//std::vector<Account*> m_debt;
}; 
#endif