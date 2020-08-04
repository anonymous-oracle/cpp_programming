#include <iostream>
#include <vector>
#include <string>
#include "Account.h"
using namespace std;

int main(int argc, char **argv)
{
    Account frank;
    frank.set_balance(1000.0);
//    double bal = frank.get_balance();
    frank.set_name("Frank");
    frank.deposit(500);
    if(frank.withdraw(800)){
        cout << "WITHDRAWAL SUCCESSFUL" << endl;
    }
    else{
        cout << "INSUFFICIENT BALANCE" << endl;
    }
    if(frank.withdraw(800)){
        cout << "WITHDRAWAL SUCCESSFUL" << endl;
    }
    else{
        cout << "INSUFFICIENT BALANCE" << endl;
    }
    
    cout << "balance is: " << frank.get_balance()<< endl;
	return 0;
}