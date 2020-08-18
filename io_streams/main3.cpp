#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    int num {};
    double total {};
    string name {};
    string info {"moe 100 123.45"};
    istringstream iss {info};
    iss >> name >> num >> total;
    cout << setw(10) << left << name
    << setw(5) << num
    << setw(10) << total << endl;
    cout << "\n----------------------------------------------" << endl;
    ostringstream oss {};
    oss << setw(10) << left << name
    << setw(5) << num<< setw(10) << total
    << endl;
    cout << oss.str() << endl;
    
    cout << "\n----------Data Validation-------------" << endl;
    int value {};
    string entry {};
    bool done = false;
    do {
        cout << "please enter an integer:";
        cin >> entry;
        istringstream validator {entry};
        if (validator >> value)
            done = true;
    else
        cout << "that is not an integer" << endl;
        
        
        // discards the input buffer
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }while (!done);
    cout << "you entered: " << value << endl;
    
    	return 0;
}
