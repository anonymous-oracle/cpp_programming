#include <iostream>
using namespace std;

class I_Printable{
friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);   
public:
 virtual void print(std::ostream &os)const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}


class Account: public I_Printable{
    public:
    virtual void withdraw(double amount){
        cout << "Account::withdraw" << endl;
    }
   virtual ~Account(){} 
   virtual void print(std::ostream &os) const override{
       os << "Account display";
   }
};


class Checking: public Account{
public:
    virtual void withdraw(double amount){
        cout << "Checking::withdraw" << endl;
    }
    virtual ~Checking(){};
    virtual void print(std::ostream &os)const override{
       os << "Checking display";
   }
};


class Savings: public Account{
public:
    virtual void withdraw(double amount){
        cout << "in Savings::withdraw" << endl;
    }
    virtual ~Savings(){};
    virtual void print(std::ostream &os)const override{
       os << "Savings display";
   }
};

class Trust: public Account{
public:
    virtual void withdraw(double amount){
        cout << "in Trust::withdraw" << endl;
    }
    virtual ~Trust(){};
    virtual void print(std::ostream &os)const override{
       os << "Trust display";
   }
};

int main(){
    Account *p1 = new Account();
    cout << *p1 << endl;
    
    Account *p2 = new Checking();
    cout << *p2 << endl;
    
 return 0;
}