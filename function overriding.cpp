#include<iostream>
using namespace std;
class parent 
{
    public:
    void display()
    {
        cout<<"this is parent class"<<endl;
    
    }
};
class child : public parent
{
    public:
    void display()
    {
        cout<<"this is child class"<<endl;
    }
};
int main()
{
    child obj;
    obj.display();
    return 0;
}