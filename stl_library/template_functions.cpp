#include <iostream>
#include <string>
using namespace std;


template <typename t>
t min_new(t a, t b){
    return (a < b)?a:b;
}

template <typename t1, typename t2>
void func(t1 a, t2 b){
    cout << a << " " << b << endl;
}

template <typename t>
void swap_new(t &a, t &b){
    t temp = a;
    a = b;
    b = temp;
}

struct person{
   string name;
int age;
// if we don't provide an overloaded operator, the program won't compile
bool operator<(const person &rhs)const{
    return this->age < rhs.age;
} 
};

std::ostream &operator<<(std::ostream &os, const person &obj){
    os << obj.name;
    return os;
}

int main()
{
    int x{10}, y{20};
    cout << "x: " << x << " | y: " << y << endl;
    
    swap_new(x, y);
    cout << "x: " << x << " | y: " << y << endl;
    
    person p1 {"curly", 50}, p2 {"twirly", 30};
  cout << min_new<int>(2, 3) << endl;  
    cout << min_new(2, 3) << endl;  
    cout << min_new('A', 'B') << endl;  
    cout << min_new(12.5, 9.2) << endl;
    cout << min_new(5+2*2, 7+40) << endl;
    
    person mini = min(p1,p2);
    
    cout << mini.name << " is younger" << endl;
    
    cout << endl;
    cout << "---------------------------------------------------" << endl;
    cout << endl;
    
    func<int, int>(10,20);
    func(10,20);
    func<char, double>('A', 12.4);
    func(1000, "Testing");
    func(2000, std::string("frank"));
    func(p1, p2);
    
	return 0;
}
