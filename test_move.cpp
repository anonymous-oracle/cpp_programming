#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

int main(){
    
    vector <Move> move_vec;
    move_vec.push_back(Move{10});
    move_vec.push_back(Move{20});
     const Move change{5};
    PRINT(change.get_data_value());
    return 0;
}