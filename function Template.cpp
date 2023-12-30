#include<iostream>
using namespace std;
template <class x>
x add( x a, x b){
    return a+ b;
}
int main()
{
    cout<<"Sum of int = "<<add(15,8)<<endl;
    cout<<"Sum of char = "<<add('p','q')<<endl;
    cout<<"Sum of double= "<<add(7.5 ,9.2)<<endl;
    return 0;
}