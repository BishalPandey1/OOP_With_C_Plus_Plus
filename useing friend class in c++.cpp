#include<iostream>
using namespace std;
class A {
    private:
    int x;
    protected:
    int y;
    public:
    A()
    {
        x=10;
        y=20;
    }
    friend class B;
};
 class B {
    public:
    void display(A t)
    {
        cout<<"the value of x is "<<t.x<<"and y is"<<t.y;
    }
 };
 int main()
 {
    A v;
    B u;
    u.display(v);
    return 0;
 }