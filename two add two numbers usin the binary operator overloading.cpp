#include<iostream>
using namespace std;
class calculator 
{
    int x, y;
    public:
    void input()
    {
        cout<<"Enter the first number:" <<endl;
        cin >>x ;
    }
    void input2()
    {
        cout<<"Enter the second number:"<<endl;
        cin>>y;
    }
    calculator operator+(calculator &ob)
    {
        calculator A;
        A.x = x + ob.x;
        return (A);
    }
    void print()
    {
        cout<<"The sum of two numbers is :"<< x;
    }

};
int main()
{
    calculator x1, y1, res;
    x1.input();
    y1.input();
    res= x1 + y1;
    res.print();
    return 0;
}