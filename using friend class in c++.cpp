#include<iostream>
using namespace std;
class A{
    private:
    int x;
     protected:
      int y;
      public:
       int y;
        A()
        {
            x=10;
             y=20;

        }
        friend class B;

};
class B;
public:
int display (A t)
{
    t.z=t.x+t.y;
    return t.z;

};
int main(){
A v;
 B u;
 int l= u.dipaly(v);
 cout<<l;
 return 0;
}
