#include <iostream>
#include "Copy.h"

Copy::Copy(int data_val){
    this->data = new int;
    *this->data = data_val;
    std::cout << "constructor called" << std::endl;
}

// shallow copy
//Copy::Copy(const Copy &source): data{source.data} {
//    std::cout << "shallow copy constructor called" << std::endl;
//}

// deep copy - Method I (delegating to the main constructor)
//Copy::Copy(const Copy &source): Copy{*source.data} { 
//    std::cout << "deep copy constructor called" << std::endl;
//}

// deep copy - Method II
//Copy::Copy(const Copy &source){
//    this->data = new int;
//    *this->data = *source.data;
//    std::cout << "deep copy constructor called" << std::endl;
//}

Copy::~Copy(){
    std::cout << "destructor called and freed data" << std::endl;
    delete this->data;
}