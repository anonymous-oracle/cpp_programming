#include <iostream>
#include <vector>
#include <string>
#include "Account.h"
#include "Savings_Account.h"
using namespace std;

int main(){
    // using Account class;
    
    Account acc {};
    acc.deposit(2000);
    acc.withdraw(500);
    cout << endl;
    
    Account *pacc = new Account;
    pacc->deposit(2000);
    pacc->withdraw(500);
    delete pacc;
    
    // using Savings_Account class; 
    
    Savings_Account savacc {};
    savacc.deposit(2000);
    savacc.withdraw(500);
    
    Savings_Account *psavacc = new Savings_Account;
    psavacc->deposit(2000);
    psavacc->withdraw(500);
    
    delete psavacc;
    return 0;
}