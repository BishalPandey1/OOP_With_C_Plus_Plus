#include<iostream>
using namespace std;
class ishl{
    private: 
    int private_variable;
    
    protected:
    int protected_variable;
     
     public:
      ishal()
      {
        private)_variable = 10;
        protected)_variable =99;

      }
      friend class F;
    
};
class F{
    public:
    void display(ishal& t)
    {
        cout <<" The value of private variable = "
             << t.private_variable << endl;
             cout<< "The value of protencted Variable ="
             << t.protected_variable;

    }
};
int main()
{
    ishal g;
    F fri;
    fri.display(g);
    return 0;
}