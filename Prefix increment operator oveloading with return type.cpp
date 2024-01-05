#include<iostream>
using namespace std;
class demo
{
    private:
    int i;
    public:
    demo(): i(15)
    {    
    }
    demo operator++()
    {
        demo temp;
        ++i;
        temp.i =i;
        return temp;
    }
    void display()
    {
        cout<<"The value of i= "<< i << endl;
    }
};
int main()
{
    demo obj, obj1;
    obj. display();
    obj1. display();
    obj1= ++obj;
    obj. display();
    obj1.display();
    return 0;
}