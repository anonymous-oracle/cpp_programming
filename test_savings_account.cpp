#include <iostream>
#include "Savings_Account.h"
int main()
{
    {
	PRINT("=============Account class============\n");
    Account2 a1{1000};
    a1.deposit(500);
    a1.withdraw(1000);
    a1.withdraw(5000);
    }
    {
    PRINT("=============Savings Account class============\n");
    Savings_Account s1 {1000, 5.0};
    s1.deposit(1000);
    s1.withdraw(2000);
    s1.withdraw(1000);
    }
	return 0;
}
