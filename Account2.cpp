#include "Account2.h"



Account2::Account2(double balance_val): balance{balance_val}{
std::cout << "Account constructed with balance: " << balance_val << std::endl;
}


bool Account2::deposit(double amount){
    if (amount < 0){
        return false;
    }
    this->balance += amount;
    return true;
//    std::cout << "amount " << amount << " deposited in Account2" << std::endl;
}

bool Account2::withdraw(double amount){
    if  (amount <= this->balance){
        this->balance -= amount;
        std::cout << "amount " << amount << " withdrawn from Account2" << std::endl;
        return  true;
    }
    else{
        std::cout << "Account2: INSUFFICIENT BALANCE!!" << std::endl;
        return false;
    }
}

Account2::~Account2(){
    PRINT("Account2 destructor called");
}

Account2::Account2(const Account2 &source): balance{source.balance}{
    
    PRINT("Account2 copy constructor called");
}

Account2::Account2(Account2 &&source){
    Account2{source};
        PRINT("Account2 move constructor called");
}

std::ostream &operator<<(std::ostream &os, const Account2 &account){
    os << "Account2 balance: " << account.balance;
    return os;
}