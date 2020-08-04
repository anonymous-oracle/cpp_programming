#include <iostream>


class Copy{
private:

int *data;

public:

Copy(int data_val = 0);

//SHALLOW AND DEEP COPY
Copy(const Copy &source);
~Copy();
inline int get_data(){
    return *this->data;
}
 
};