#include "player.hpp"

Player::Player():
	m_jobTitle(),
	m_salary(),
	m_savingsAccts()
{

}

Player::~Player()
{

}

std::string Player::getJobTitle()
{
	return m_jobTitle;
}

void Player::updateJobTitle(const std::string& p_jobTitle)
{
	m_jobTitle = p_jobTitle;
}

int Player::getSalary()
{
	return m_salary;
}

void Player::updateSalary(const int& p_salary)
{
	m_salary = p_salary;
}

std::vector< std::shared_ptr<Account> > Player::getSavingsAccts()
{
	return m_savingsAccts;
}

void Player::addSavingsAccount(const std::shared_ptr<Account>& p_account)
{
	m_savingsAccts.push_back(p_account);
}