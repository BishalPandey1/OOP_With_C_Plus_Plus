#include<iostream>
using namespace std;
class interst

{
  public:
  int p,t,r,si;
  void dispalyresult()
  {
    cout<<"enter principl, time and rate";
    cin>> p >>t>>r;
    si= p*t*r/100;
    cout<<"the interest is"<< si;
  }
};
int main()
{
  interst i;
  i.dispalyresult();
  return 0;
}