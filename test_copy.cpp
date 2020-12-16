#include <iostream>
#include "Copy.h"

using namespace std;


void display_data(Copy c){
    cout << "the data has value: " << c.get_data() << endl;
}



int main(){
    Copy one{5};
    Copy two {one};
    
//    delete one;
    cout << "the value of Copy() class before freeing up the memory is: " << two.get_data() << endl;
    display_data(two);
    cout << "the value of Copy() class after freeing up the memory is: " << two.get_data() << endl;
    
   
    
    return 0;
}