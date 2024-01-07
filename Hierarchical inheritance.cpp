#include<iostream>
using namespace std;
class A
{
    public:
    int x,y;
    void getdata()
    {
        cout<<"Enter value of x:";
        cin>>x;
        cout<<"Enter value of y:";
        cin>>y;
    }

};
class B: public A{
    public:
    void product()
    {
        cout<<"Product="<<x * y <<endl;

    }
};
class c: public A
{
    public:
    void sum()
    {
        cout<<"sum=" <<x + y;
    }
};
 int main()
 {
    B obj1;
    c obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
 }