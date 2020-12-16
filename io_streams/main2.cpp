#include <iostream>
#include <fstream>
#include <string>
#include <gs
using namespace std;

int main(int argc, char *argv[])
{
//    string filename {argv[1]};
    string filename {"../test.txt"};
	ifstream infile;
    ofstream outfile;
    int i;
    double d;
    string str;
    
    outfile.open("../output.txt");
    infile.open(filename);
    
    string line {};
    if (!infile){
//    if (!infile.is_open()){
        cerr << "could not open the file" << endl;
        exit(1);
    }
    else{
if (!outfile){
    cerr << "could not write to file" << endl;
}
else{
    while (!infile.eof()){
        infile >> str >> i >> d;
        outfile << str << " " << i << " " <<  d << "\n" ;
    }
        outfile << endl;
    infile.seekg(SEEK_SET);
    
    while (getline(infile, line)){
        outfile << line << "\n";
    }

    
    outfile << endl;
//    outfile << endl;
}
infile.close();
outfile.close();
	return 0;
}
}