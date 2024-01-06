#include<iostream>
using namespace std;
class intrest
{
 public:
 int p,t,r,si;
 intrest()
 {
p=1000,t=3,r=3;
 } 

 void dispayres()
 {
    si=p*t*r/100;
    cout<<"the interst is "<<si;
     
 }
 };

 int main()
 {
    intrest i;
  i.dispayres();
    return 0;
 }