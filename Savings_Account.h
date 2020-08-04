#include <iostream>
#include "Account2.h"
#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#define PRINT(sent)\
 std::cout << sent << std::endl
 
 class Savings_Account: public Account2{
     friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
protected:
     double interest_rate;
     public:
Savings_Account(double balance_val=0, double interest_rate_val=0);
~Savings_Account();    
bool deposit(double amount);
 
     
 };
 
 #endif