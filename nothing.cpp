#include<iostream>
using namespace std;
class  me
{
    int a, b;
    public:
    void see()
    {
        cout<<"enter the value of a";
        cin>>a;
        cout<<"enter the value of b";
        cin>>b;

    }
};
class do:public me{
    public:
    void there()
    {
        see();
    }
};
int main()
{
    do obj;
    obj.there();
    return 0;
}