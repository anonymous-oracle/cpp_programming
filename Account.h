#include <string>
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account{
    private:
    // attributes
   std::string name;
   double balance;
   static int num_accounts;
   public:
   // methods
   Account(std::string name_val="None", double balance_val=0);
~Account();    
   bool withdraw(double amt);
   bool deposit(double amt);
   inline void set_balance(double bal) {this->balance = bal;}
    inline double get_balance() {return this->balance;}
    Account(const Account &source);
    Account(Account &&source);
    void set_name(std::string n);
    std::string get_name();
    static int get_num_accounts();
    
};

#endif