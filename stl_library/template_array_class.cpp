#include <iostream>
#include <string>
using namespace std;


template <typename t, int n>
class Array{
    int size{n};
    t values[n];
    
    friend std::ostream &operator<<(std::ostream &os, const Array<t, n> &arr){
        os << "[ ";
        for(const t &val: arr.values){
            os << val << ", ";
        }
        os << "]" << endl;
        return os;
    }
public:
    Array()=default;
    Array(t init_val){
        for (t &item: values){
            item = init_val;
        }
    }
    void fill(t val){
        for (t &item: values){
            item = val;
        }
    }
    int get_size() const{
        return size;
    }
    
    t &operator[](int index){
        return values[index];
    }
};

int main(){
    Array<int, 5> nums;
    cout << "the size of num is: "<< nums.get_size() << endl;
    cout << nums << endl;
    nums.fill(0);
    cout << "the size of nums is: " << nums.get_size() << endl;
    cout << nums << endl;
    
    nums.fill(10);
    cout << nums << endl;
    nums[0] = 1000;
    nums[3] = 2000;
    cout << nums << endl;
    
    
    Array<int, 100> nums2 {1};
    cout << "the size of nums2 is: " << nums2.get_size()  << endl;
    cout << nums2 << endl;
    
    Array<string, 10> strings {"frank"};
    cout << "the size of strings is: " << strings.get_size() << endl;
    cout << strings << endl;
    strings[0] = "moe";
    cout << "the size of strings is: " << strings.get_size() << endl;
    cout << strings << endl;
    
    strings.fill("larry");
    cout << "the size of strings is: " << strings.get_size() << endl;
    cout << strings << endl;
    return 0;
}