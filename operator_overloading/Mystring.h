#include <iostream>
#ifndef _MYSTRING_H_
#define  _MYSTRING_H_
#define PRINT(sent)\
 std::cout << sent << std::endl
 
 class Mystring{
     
     friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
     friend std::istream &operator>>(std::istream &os, Mystring &obj);
     private:
     char *str;
     
public:
     Mystring();
     Mystring(const char *s);
     Mystring(const Mystring &source);
     ~Mystring();
     void display() const;
     int get_length() const;
     const char *get_str() const;
     
//     overloaded operators
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    bool operator==(const Mystring &rhs) const;
    
 };
 
 
 
 
 
 
 #endif