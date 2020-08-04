#include <iostream>
//#include <vector>
using namespace std;

// Dynamic polymorphism using 'virtual' keyword

class Account{
   public:
virtual void withdraw(double amount){
    cout << "In Account::withdraw for amount:" << amount  << endl;
} 

virtual ~Account() {cout << "Account destructor called" << endl;}
};

class Checking: public Account{
   public:
virtual void withdraw(double amount){
    cout << "In Checking::withdraw for amount:" << amount    << endl;
} 
virtual ~Checking() {cout << "Checking destructor called" << endl;}
};

class Savings: public Account{
   public:
virtual void withdraw(double amount){
    cout << "In Savings::withdraw for amount:" << amount    << endl;
} 
virtual ~Savings() {cout << "Savings destructor called" << endl;}
};

class Trust: public Savings{
   public:
virtual void withdraw(double amount){
    cout << "In Trust::withdraw for amount:" << amount    << endl;
} 
virtual ~Trust() {cout << "Trust destructor called" << endl;}
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main()
{
//	cout << "=====POINTERS======\n" << endl;
//    Account *p1 = new Account();
//    Account *p2 = new Savings();
//    Account *p3 = new Checking();
//    Account *p4 = new Trust();
//    Account* arr[] = {p1,p2,p3,p4};
//    for(Account* &acc:arr){
//        acc->withdraw();
//    }
//    
//    cout << "\n=======CLEAN UP=======\n" << endl;
//    for(Account* &acc:arr){
//      delete  acc;
//    }
Account a;
Account &ref = a;
ref.withdraw(100);

Trust t;
Account &ref1 = t;
ref1.withdraw(100);
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1, 100);    
    do_withdraw(a2, 100);    
    do_withdraw(a3, 100);    
    do_withdraw(a4, 100);
    
    
	return 0;
}
