#include <iostream>
using namespace std;

class Account{
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount){
        cout << "Account::withdraw" << endl;
    }
   virtual ~Account(){} 
};

std::ostream &operator<<(std::ostream &os, const Account &acc){
    os << "Account display";
    return os;
}



class Checking: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking &acc);
public:
    virtual void withdraw(double amount){
        cout << "Checking::withdraw" << endl;
    }
    virtual ~Checking(){};
};

std::ostream &operator<<(std::ostream &os, const Checking &acc){
    os << "Checking display";
    return os;
}



class Savings: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Savings &acc);
public:
    virtual void withdraw(double amount){
        cout << "in Savings::withdraw" << endl;
    }
    virtual ~Savings(){};
};

std::ostream &operator<<(std::ostream &os, const Savings &acc){
    os << "Savings display";
    return os;
}


class Trust: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Trust &acc);
public:
    virtual void withdraw(double amount){
        cout << "in Trust::withdraw" << endl;
    }
    virtual ~Trust(){};
};

std::ostream &operator<<(std::ostream &os, const Trust &acc){
    os << "Trust display";
    return os;
}

int main(){
//    
//    Account a;
//    cout << a << endl;
//    
//    Checking c;
//    cout << c << endl;
//    
//    Savings s;
//    cout << s << endl;
//    
//    Trust t;
//    cout << t << endl;

//==========BUT=========    

    Account *p1 = new Account();
    cout << *p1 << endl;
    
    Account *p2 = new Checking();
    cout << *p2 << endl;
    
// here the friend function which is overloaded globally is not a virtual function and is not dynamically linked to the Checking class
    return 0;
}