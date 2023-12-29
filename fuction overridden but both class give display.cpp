#include<iostream>
using namespace std;
class parent {
    public:
    void display()
    {
        cout<<" I am the Parent class function "<<endl;
    }

};
class Child: public parent
{
    public:
    void display()
    {
        cout<<" I am the child class fuction"<<endl;
    }
};

int main()
{
    Child ho1, ho2;
    ho1.display();
    ho2.parent :: display(); 
    cout<< "THANK YOU ALL OF YOU";
    return 0;
}