#include <string>
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account{
    private:
    // attributes
   std::string name;
   double balance;
   public:
   // methods
   bool withdraw(double amt);
   bool deposit(double amt);
   inline void set_balance(double bal) {this->balance = bal;}
    inline double get_balance() {return this->balance;}
    
    void set_name(std::string n);
    std::string get_name();
    
    
};

#endif