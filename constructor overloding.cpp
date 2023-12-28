#include<iostream>
using namespace std;
class constr {
    double area;
    public:
     constr(){
        area=12;
     }
     constr(int a, int b){
        area= a*b;
     }
     void display()
     {
        cout<<"the area is "<< area;
     }
};
int main()
{
    constr cc;
    constr dd(7,8);
    cc.display();
    dd.display();
    return 0;
}