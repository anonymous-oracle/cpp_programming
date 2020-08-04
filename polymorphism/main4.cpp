//pure virtual functions and abstract classes
#include <iostream>
#include <vector>
using namespace std;
class Shape{
private:
public:
    virtual void draw() = 0; // these two functions have to be overwritten to have concrete derivatives
    virtual void rotate() = 0; // of this abstract class; declaring functions like these ensure that the class is now abstract
    virtual ~Shape() {}
};
class Open_Shape: public Shape{
public:
    virtual ~Open_Shape(){
        
    }
};

class Closed_Shape: public Shape{
public:
    virtual ~Closed_Shape() {}
};

class Line: public Open_Shape{
public:
    virtual void draw() override{
        cout << "drawing a line" << endl;
    }
    virtual void rotate() override{
        cout << "rotating a line" << endl;
    }
    virtual ~Line(){    }
};

class Circle: public Closed_Shape{
public:
    virtual void draw() override{
        cout << "drawing a circle" << endl;
    }
    virtual void rotate() override{
        cout << "rotating a circle" << endl;
    }
    virtual ~Circle(){    }
};

class Square: public Closed_Shape{
public:
    virtual void draw() override{
        cout << "drawing a square" << endl;
    }
    virtual void rotate() override{
        cout << "rotating a square" << endl;
    }
    virtual ~Square(){    }
};

int main(){
//    Shape s;
//    Shape *p = new Shape(); // cannot instantiate abstract classes;
    
//    Circle c;
//    c.draw();
//    
//    Shape *p2 = new Circle();
//    p2->draw();
//    p2->rotate();
    
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    vector<Shape*> shapes {s1,s2,s3};
    for (Shape* &ptr: shapes){
        ptr->draw();
        ptr->rotate();
        cout << endl;
    }
    
    
    for (Shape* &ptr: shapes){
        delete ptr;
    }
    
    return 0;
}