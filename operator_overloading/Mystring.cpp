#include <iostream>
#include <cstring>
#include <limits>
#include "Mystring.h"



//we can also have global functions working on classes as over-loaded operators; for which we must ensure that they are declared as friend functions;
//then, instead of passing just rhs we must also pass lhs as well; this takes the place of the 'this' pointer in the member functions

// for stream operators it is better to include them as friend functions and as global overloaded operators rather than member methods because we might end up using class objects as 
// "str << cout;" OR "str >> cin" since the rule has it that for a binary operator the object should be on the left of the operand; while this method works, it will look confusing in terms pf stream operators 
// because that's not how we use them in other cases; infact declare all global overloaded class specific operators as friends of class

Mystring::Mystring(): str{nullptr}{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s): str{nullptr}{
    if (s==nullptr){
str = new char[1];
*str = '\0';        
    }
    else{
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring &source): str{nullptr}{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

Mystring::~Mystring(){
    delete [] str;
}

void Mystring::display() const{
    std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const{
    return std::strlen(this->str);
}

const char *Mystring::get_str() const {
    return this->str;
}

Mystring& Mystring::operator=(const Mystring &rhs){
    if (this==&rhs){
                PRINT("move operator called");
        return *this;
    }
    delete [] str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
            PRINT("move operator called");
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs){
    if (this==&rhs){       
    PRINT("move operator called");
        return *this;
    }
    else{
        delete [] this->str;
        this->str = rhs.str;
        rhs.str = nullptr;
        PRINT("move operator called");
        return *this;
    }
}

Mystring Mystring::operator-() const {
    size_t str_len = std::strlen(this->str);
    char *buff = new char[str_len + 1];
    *(buff + (str_len + 1)) = '\0';
    for(size_t i = 0; i <= str_len; i++){
        buff[i] = std::tolower(this->str[i]);
    }
    Mystring temp = Mystring {buff};
    delete [] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);
    Mystring temp = Mystring {buff};
    delete [] buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs) const{
    return (std::strcmp(this->str, rhs.str) == 0);
}

std::ostream &operator<<(std::ostream &os, const Mystring &obj){      //we return stream references because we do not want to copy the streams themselves;
    os << obj.str;
    return os;
}

std::istream &operator>>(std::istream &is,  Mystring &obj){
    char *buff = new char[BUFSIZ];
    is >> buff;
    obj = Mystring{buff};
    delete [] buff;
    return is;
}