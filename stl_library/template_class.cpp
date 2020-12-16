#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename t>
class Item{
   private:
string name;
t value;

public:
Item(string name="None", t value=false): name{name} , value{value}{}
inline string get_name()const{return this->name;}
t get_value() const {return this->value;}

};

template <typename t1, typename t2>
struct pair_new{
    t1 first;
    t2 second;
};

int main()
{
   Item<int> item1 {"frank", 100};
   cout << item1.get_name() << " " << item1.get_value() << endl;
   
   Item<string> item2 {"frank", "professor"};
   cout << item2.get_name() << " " << item2.get_value() << endl;
   
 Item<Item<string>> item3 {"frank", {"C++", "professor"}};
   cout << item3.get_name() << "  " << item3.get_value().get_name()
                << " " << item3.get_value().get_value() <<  endl;
    
    cout << endl;
    cout << "=============================" << endl;
    cout << endl;
    vector <Item<double>> vec {};
    vec.push_back(Item<double>{"larry", 100.0});
    vec.push_back(Item<double>{"moe", 200.0});
    vec.push_back(Item<double>{"curly", 300.0});
    
    for(Item<double> &item: vec){
        cout << item.get_name() << " " << item.get_value() << endl;
    }
    
    cout << endl;
    cout << "=============================" << endl;
    cout << endl;
    
    pair_new <string, int> p1 {"frank", 100};
    pair_new <int, double> p2 {124, 137.36};
    
    cout << p1.first << ", " << p1.second << endl;
    cout << p2.first << ", " << p2.second << endl;
    
	return 0;
}