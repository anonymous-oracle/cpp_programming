#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    char choice {};
    string str = "hello";
    int add {};
    int small {}, large {}; 
    vector <int> list {};
    int sum {};
    cout << "enter a choice:\n\"p\" to print the list\n\"m\" to print the mean of the list\n\"s\" to print the smallest of the list\n" \
        "\"l\" to print the largest of the list\n\"a\" to add an element to the list\n\"q\" to quit\n";
    while (choice!='q')
    {
        
        cin >> choice;
        switch (choice)
        {
        case 'a':
            cin >> add;
            if (add > large){
                large = add;
            }
            else if (add < small)
            {
                small = add;
            }
            list.push_back(add);
            break;
        case 's':
        cout << "the smallest number is: " << small << endl;
        break;
        
        case 'l':
        cout << "the largest number is: " << large << endl;
        break;

        case 'm':
        for (int num: list){
            sum += num;
        }
        cout << "the sum of all elements in the list is: " << static_cast<float> (sum) / list.size() << endl;
        sum = 0;
        break;

        case 'p':
        for (int num: list)
        {
            cout << num << " ";
        }
        cout << endl;
        break;

        default:
            break;
        }
    }
    
    
    return 0;
}
