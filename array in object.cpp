#include<iostream>
using namespace std;
class arrayobj 
{
    private:
    char naam[30];
    int age;
     double grade;
     public:
     void getdata()
     {
        cout<<"enter name";
        cin>>naam;
        cout<<"enter age";
        cin>>age;
        cout<<"enter the class";
        cin>>grade;
        
     }
     void displaydata()
     {
        cout<<"name ="<<naam;
        cout<<"age="<<age;
        cout<<"class="<<grade;
     }
};
int main()
{
    int i;
    arrayobj ob[5];
    for(i=0; i<=4;i++);
    {
        ob[i].getdata();
    }
    for (i=0; i<4;i++){
        ob[i].displaydata();
    }
    return 0;
}