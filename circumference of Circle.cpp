#include<iostream>
using namespace std;
class circle
{
    public:
    double r,cofc;
    void area(){
        cout<<"enter the value of r:";
        cin >>r;
        cofc=  2* 22/7 *r;
        cout<<" the value of circumference of cirlce is"<<cofc;

    }
};
int main(){
    circle c;
    c.area();
    return 0;
}