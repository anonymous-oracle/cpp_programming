#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
//    string filename {argv[1]};
    string filename {"../test.txt"};
	ifstream infile;
    infile.open(filename);
    char c;
    string line;
    if (!infile){
//    if (!infile.is_open()){
        cerr << "could not open the file" << endl;
//        exit(1);
    }
    else{
        // read line by line;
//       while(getline(infile, line)){ 
//           cout << line << endl;
//       }

// read character by character
while(infile.get(c)){
    cout << c;
}
 }
 infile.close();
 cout << endl;
   cout << "=================================" << endl;
   cout << endl;
// formatted input style;
ifstream infile2;
string filename2 {"../test.txt"}; 
int i;
double d;
string str;
infile2.open(filename2);
infile2 >> str >> i >> d;
cout << "string: " << str << endl;
cout << "integer: " << i << endl;
cout << "double: " << d << endl;
cout << endl;
//infile2.close();
//infile2.open(filename2);
infile2.seekg(SEEK_SET);
while (!infile2.eof()){
    infile2 >> str >> i >> d;
    cout << "string: " << str << endl;
    cout << "integer: " << i << endl;
    cout << "double: " << d << endl;
    cout << endl;
}
 cout << endl;
   cout << "=================================" << endl;
   cout << endl;
infile2.seekg(SEEK_SET);
while (infile2 >> str >> i >> d){
    cout << "string: " << str << endl;
    cout << "integer: " << i << endl;
    cout << "double: " << d << endl;
    cout << endl;
}


infile2.close();
	return 0;
}