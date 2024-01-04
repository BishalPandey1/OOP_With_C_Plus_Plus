#include<iostream>
using namespace std;
class Parent 
{
    public:
    void display()
    {
        cout<<"This is Parent class"<<endl;
    }
};
class child: public Parent
{
    public:
     void display()
     {
        cout<<"This is child class"<<endl;
     }
};
int main()
{
    child obj;
    Parent *ptr= &obj;
    ptr-> display();
    return 0;
}