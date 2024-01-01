#include<iostream>
using namespace std;
class intrest
{

public:
int p,t,r,si;

intrest();
void display(){
    si= p*t*r/100;
    cout<<"the intrest is "<<si;

}

};
intrest::intrest()
{
    p=1000,t=3,r=4;
}
int main()
{
    intrest i;
    i.display();
    return 0;
}