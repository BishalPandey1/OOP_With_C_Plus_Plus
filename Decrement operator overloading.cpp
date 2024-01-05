#include<iostream>
using namespace std;
int main()
{
    int a= 41;
    int c;
    c=a++;
    cout<<"value of a++ is :"<<c <<endl;
    cout<<"value of a is :"<<a<<endl;
    c= ++a;
    cout<<"value of a++ is :"<<c << endl;
    return 0;
}