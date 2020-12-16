#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> *ints = new vector <int> {};
    ints->push_back(1);
    ints->push_back(2);
    for (int &i: *ints){
        cout << "Number: " << i << endl;
    }
    delete ints;
    return 0;
}
