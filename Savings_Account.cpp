#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account(double balance_val, double interest_rate_val): Account2(balance_val), interest_rate{interest_rate_val}{
    std::cout << "Savings Account constructed with balance: " << balance_val << "\nInterest rate: " << interest_rate_val<<std::endl;
    
}

Savings_Account::~Savings_Account(){
    PRINT("savings account destructor called");
}

bool Savings_Account::deposit(double amount){
    amount = amount + (amount * (this->interest_rate/100));
    std::cout << amount << " deposited" << std::endl;
    return Account2::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account){
    os << "Savings Account balance: " << account.balance << "\nSavings Account interest rate: "<<account.interest_rate;
    return os;
}