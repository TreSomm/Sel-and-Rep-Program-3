
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    fstream ifile1, ifile2,ifile3;

    string names, file2line;

    ifile1.open("File1.txt");
    ifile2.open("File2.txt");
    ifile3.open("File3.txt");

    while (getline(ifile1, names)) {
        ifile3 << names << endl;
    }
    
    while (getline(ifile2, names)) {

        ifile3 << names << endl;
    }
    ifile1.close();
    ifile2.close();
    ifile3.close();
}
