#include<iostream>
using namespace std;
class A{
    public:
    int x;

};
class b: public A 
{
    public:
    b()
    {
        x=75;
    }
};
class c
{
    public:
    int y;
    c()
    {
        y= 18;

    }
};
class d : public b, public c 
{
    public:
    void sum()
    {
        cout<<"Sum="<< x + y;

    }
};
int main()
{
    d obj;
    obj. sum();
    return 0;
}