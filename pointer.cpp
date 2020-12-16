#include<iostream>
using namespace std;

int *product_array(const int m, const int *arr1, const int *arr2);

int main(int argc, char const *argv[])
{
    int m;
    cout << "enter the size of arrays: " << endl;
    cin >> m;
    int *arr1 = new int[m];
    int *arr2 = new int[m];
    cout << "enter " << m <<" values for the first array:" << endl;
    for (int* read = arr1; read < (arr1 + m); read++)
    {
        cin >> *read;
    }
    cout << "enter " << m <<" values for the second array:" << endl;
    for (int* read = arr2; read < (arr2 + m); read++)
    {
        cin >> *read;
    }
    arr1 = product_array(m, arr1, arr2);
    cout << "the product array is as follows:" << endl;
    for (int* i = arr1 ; i < (arr1 + m); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
    return 0;
}

int *product_array(const int m, const int *arr1, const int *arr2)
{
    int *arr = new int[m];
    for(int* write = arr; write < (arr + m); arr1++, arr2++, write++)
    {
        *write = *arr1 * *arr2;
    }
    return arr;
}