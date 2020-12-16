#include <iostream>
#include <cstring>
#include "Mystring.h"
using namespace std;
int main(){
    
//RULE: THE CLASS OBJECT SHOULD ALWAYS BE THE LEFT OPERAND    
    
// COPY OPERATOR
//    Mystring empty;
//    Mystring one {"hello"};
//    Mystring two{one};
//    Mystring three{"this is a test"};
//    empty = three;
//    empty = "trying something else";
//    one.display();
//    two.display();

// MOVE OPERATOR
//    Mystring four, five;
//    four = "hello again";
//    five = Mystring {"this is the second time"};
//    return 0;
//char *buff = new char[BUFSIZ];
//buff = "hello there";
//PRINT(strlen(buff));

//Mystring case1 {"HELLO"};
//Mystring case2 = -case1;
////cout << case1;
////cout  << case2;
//(case2==case1)? PRINT("true"): PRINT("false");
////PRINT(BUFSIZ);
//case2 = case2 + " there!";


// stream operators
Mystring str1, str2 {"something"}, str3{"something else"};
cout << str2 << endl;
cin >> str1 >> str2 >> str3;
cout << "the strings are, " << str1 << ", " << str2 << " and " << str3 << endl;

}

