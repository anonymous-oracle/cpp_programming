#include <iostream>
//#include <vector>
using namespace std;

// Dynamic polymorphism using 'virtual' keyword

class Base{
   public:
virtual void hello() const{
    cout << "In Base::hello"  << endl;
} 

virtual ~Base() {cout << "Base destructor called" << endl;}
};

class Derived: public Base{
public:
   // here the const keyword is not specified, and so when the Derived::hello() is intended to be called, the Base::hello() will be called instead because of a change in the function signature
   // to avoid this, we can specify override keyword in front of the function definitions
virtual void hello() const override{
    cout << "In Derived::hello"  << endl;
} 
virtual ~Derived() {cout << "Derived destructor called" << endl;}
};

int main()
{
	cout << "=====POINTERS======\n" << endl;
    Base *p1 = new Base();
    Base *p2 = new Derived();

    p1->hello();
    p2->hello();

	return 0;
}