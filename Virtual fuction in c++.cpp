#include<iostream>
using namespace std;
class base 
{
    public:
    virtual void print()
    {
        cout<<"Print base class "<<endl;
    }
    void show()
    {
        cout<<"show base class"<<endl;
    }
};
class derived : public base 
{
    public:
    void print()
{
    cout<<"Print derived class"<<endl;
    cout<<"This will run ";
}
void show()
{
    cout<<"Show derived class"<<endl;
}
};
 
 int main()
 {
    base *bptr;
    derived d;
    bptr =&d;
    bptr-> print();
    bptr-> show();
    cout<<"Thank you very much to all of you ";
    return 0;
 }