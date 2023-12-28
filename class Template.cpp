#include<iostream>
using namespace std;
template <class T>
class Addition
{
    public:
    T a= 20;
    T b= 30;
    void sum()
    {
        cout<<" Sum = " << a+ b << endl;
    }
};
int main()
{
    Addition<int> obj;
    obj.sum();
    return 0;
}