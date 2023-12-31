#include<iostream>
using namespace std;
class bishal
{
    int number;
    char name[40];
    public:
    void getdataa()
    {
        cout<<"Enter the Name of People:";
        cin>>name;
        cout<<"Enter the clases number of People:";
        cin>>number;

    }
    void displaya()
    {
        cout<<endl<<"name of people:"<<name<<"\nclases of people"<<number<<endl;
    }
};
class Hari : private bishal
{
int fee= 400;
 char school[40];
public:
void getdatab()
{
    getdataa();
    cout<<"the name of school:";
    cin>>school;
}
void displayb(){
    displaya();
    cout<<endl<<"the fee is:"<<fee<<"\nthe name of school is:"<<school<<endl;
}

};
int main()
{
    Hari c;
    c.getdatab();
    c.displayb();
    return 0;
}