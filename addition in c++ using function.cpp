#include<iostream>
using namespace std;
 class me
 {
    public:
    int a,b,c;
    void add() { 
    cout<<"enter the give number a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    c= a+ b;
    cout<<"the sum we get form the above additon is "<<c;
}
 };
 int main(){
 me i;
 i.add();
 return 0;
 }