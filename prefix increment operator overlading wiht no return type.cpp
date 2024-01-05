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
    void operator++()
    {
        ++i;
    }
    void display()
    {
        cout<<"The value of i = "<<i <<endl;
    }

};
int main()
{
    demo obj;
    obj.display();
    ++obj;
    obj.display();
    return 0;
}