#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

class Person {
    private:
    string name;
    int age;
    
   public:
Person() = default;
Person(string name="None", int age=0): name{name}, age{age} {}
bool operator<(const Person &rhs) const {
    return this->age < rhs.age;
}

bool operator==(const Person &rhs) const{
    return (this->name == rhs.name && this->age == rhs.age);
}

};

void find_test(){
    cout << "\n===========================" << endl;
    vector <int> vec{1,2,3,4,5};
    auto loc = find(begin(vec), end(vec), 0);
    if (loc != std::end(vec)){
        cout << "found " << *loc << endl;
    }
    else{
        cout << "could not find the number" << endl;
    }
    
        list <Person> players{
            {"larry", 18},
            {"moe", 20},
            {"curly", 22},
        };
        
        auto loc1 = find(players.begin(), players.end(), Person{"moe", 20});
        if (loc1 != players.end()){
        cout << "found moe"  << endl;
    }
    else{
        cout << "could not findmoe" << endl;
    }
}

void count_test(){
    cout << "\n==========================" << endl;
    vector <int> vec {1,2,3,4,5,1,2,1};
    
    int num = count(vec.begin(), vec.end(), 1);
    cout << num << " occurence found" << endl;
}

void count_if_test(){
    cout << "\n========================" << endl;
    
    vector <int> vec{1,2,3,4,5,6,7,8,9,10};
    int num = count_if(vec.begin(), vec.end(), [](int x){return x%2==0;});
    cout << num << " odd numbers found " << endl;
    num = count_if(vec.begin(), vec.end(), [](int x){return x%2!=0;});
    cout << num << " even numbers found " << endl;
}

void replace_test(){
        cout << "\n========================" << endl;
vector<int> vec {1,2,3,4,5,1,3,2,1};
for (auto &i: vec){
    cout << i << " ";
}
cout << endl;
replace(vec.begin(), vec.end(), 1, 100);
for (auto i: vec){
    cout << i << " ";
}
cout << endl;
}

void string_transform_test(){
    cout << "\n========================" << endl;
    string str1 {"this is a test"};
    cout << "before transformation: " << str1 << endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "after transform: " << str1 << endl;
}


int main(){
    
    find_test();
    count_test();
    count_if_test();
    replace_test();
    string_transform_test();
    return 0;
}