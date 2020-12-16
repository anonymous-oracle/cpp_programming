#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>

using namespace std;

void display(const vector<int> &vec){
    cout << "[";
    for (auto const &i: vec){
        cout << i << ", ";
    }
    cout << "]" << endl;
}

void test1(){
    cout << "\n========================" << endl;
    vector<int> nums{1,2,3,4,5};
    auto it = nums.begin();
    cout << *it << endl;
    
    it++;
    cout << *it << endl;
    it+=2;
    cout << *it << endl;
    it-=2;
    cout << *it << endl;
    it = nums.end() - 1;
    cout << *it << endl;
}

void test2(){
    cout << "\n========================" << endl;
    vector<int> nums{1,2,3,4,5};
    vector<int>::iterator it = nums.begin();
    while(it != nums.end()){
        cout << *it << endl;
        it++;
    }
    it = nums.begin();
    while (it != nums.end()){
        *it = 0;
        it++;
    }
    display(nums);
}

void test3(){
    cout << "\n========================" << endl;
    vector<int> nums{1,2,3,4,5};
    vector<int>::const_iterator it = nums.begin();
    while(it != nums.end()){
        cout << *it << endl;
        it++;
    }
    it = nums.begin();
    while (it != nums.end()){ // compilation error because of const iterator
//        *it = 0;
        it++;
    }
    display(nums);
}

//code reverse iterators and reverse const iterators in the same way

void test4(){
    cout << "\n========================" << endl;
    vector<int> vec{1,2,3,4};
    auto it = vec.rbegin();
    while(it != vec.rend()){
        cout << *it << endl;
        it++;
    }
    list <string> name {"larry", "moe", "curly"};
    auto it2 = name.crbegin();
    cout << *it2 << endl;
    it2++;
    cout << *it2 << endl;
    
    map<string, string> favorites{
        {"frank", "C++"},
        {"bill", "Java"},
        {"moe", "Python3"}
    };
    auto it3 = favorites.begin();
    while(it3!=favorites.end()){
        cout << it3->first << " : "<< it3->second << endl;
        it3++;
    }
    
}

void test5(){
    cout << "\n========================" << endl;
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() + 2; // modifying start index through(iterator) arithmetic
    auto finish = vec.end() - 2;
    while(start!=finish){
        cout << *start << endl;
        start++;
    }

}
    


int main(){
    test1();
    
    test2();
    
    test3();
    
    test4();
    
    test5();
    return 0;
}