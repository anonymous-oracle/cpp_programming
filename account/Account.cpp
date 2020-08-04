#include "Account.h"



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