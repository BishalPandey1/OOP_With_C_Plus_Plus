#include<iostream>
using namespace std;
class pconstr
{
    public:
    int a,b;
     pconstr(int l, int m )
     {
        a=l;
        b=m;
     }
     int getResult()
     {
        return a*b;
     }
};
int mani()
{
    pconstr p(5,6);
    int x=p.getResult();
    cout<<"the area of rectangle is "<<x;
    return 0;
}