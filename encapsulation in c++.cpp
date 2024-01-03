#include<iostream>
using namespace std;
class encapsulation
{
    private:
    int x;
    public:
    void set(int a)
    {
        x=a;

    }
    int get()
    {
        return x;
    }
};
int main()
{
    encapsulation obj;
    obj.set(48);
    cout<<"The value id="<< obj.get();
    return 0;
}