#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile("myfile.txt");
    myfile<<"This is the demo fiele just crated with fiel handling in C++";
    myfile.close();
    return 0;
}
// This program will ceate the extra file in our pc name as myfile