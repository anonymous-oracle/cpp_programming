#include <iostream>
#ifndef _ACCOUNT2_H_
#define _ACCOUNT2_H_
#define PRINT(sent)\
 std::cout << sent << std::endl
 
class Account2{
    friend std::ostream &operator<<(std::ostream &os, const Account2 &obj);
    protected:
    // attributes
  
   double balance;

   public:
   // methods
   Account2(double balance_val=0);
~Account2();    
   bool withdraw(double amount);
   bool deposit(double amount);
   inline void set_balance(double bal) {this->balance = bal;}
    inline double get_balance() {return this->balance;}
    Account2(const Account2 &source);
    Account2(Account2 &&source);
   
  
};

#endif