#include "Account.h"

int Account::num_accounts {0};

Account::Account(std::string name_val, double balance_val): name{name_val}, balance{balance_val}{
    num_accounts++;
}

void Account::set_name(std::string n){
    this->name = n;
}

std::string Account::get_name(){
    return this->name;
}

bool Account::deposit(double amt){
    this->balance += amt;
    return true;
}

bool Account::withdraw(double amt){
    if  (amt <= this->balance){
        this->balance -= amt;
        return true;
    }
    else{
        return false;
    }
}

int Account::get_num_accounts(){
    return num_accounts;
}

Account::~Account(){
    num_accounts--;
}

Account::Account(const Account &source){
    Account{source};
}

Account::Account(Account &&source){
    Account{source};
}