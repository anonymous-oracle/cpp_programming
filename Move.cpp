#include <iostream>
#include "Move.h"


Move::Move(int d) {
    this->data = new int;
    *this->data = d;
    PRINT("constructor called");
}

Move::Move(const Move &source): Move{*source.data}{
    PRINT("copy constructor through delegation");
}

Move::Move(Move &&source): data{source.data}{
    source.data = nullptr;
    PRINT("move constructor called");
}
Move::~Move(){
    delete this->data;
    PRINT("destructor called");
}