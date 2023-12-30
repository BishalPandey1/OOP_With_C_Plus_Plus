#include<iostream>
using namespace std;
class boy
{
    char name[100];
    double fee;
    int post;
    public:
    void givedata()
    {
        cout<<"enter the name of boys:";

        cout<<"enter the total fee of boy:";
        cin>>fee;
        cout<<"enter the value of Post:";
        cin>>post;
    }
    void outputdata()
    {
        cout<<endl<<"The name of Boy is:"<<name<<"\n The total fee of boy is:"<<fee<<"\n the post of the Boy is:"<<post<<endl;
    }
};
class girl : private boy 
{
    char name;
    int fee;
    double amount;
    public:
    void givedatag()
    {
        givedata();
        cout<<"enter the name of Girl:";
        cin>>name;
        cout<<"enter the fee amout:";
        cin>>fee;
        cout<<"enter the amout of rate:";
        cin>>amount;

    }
    void display()
    {
        outputdata();
        cout<<endl<<"The name of girl is:"<<name <<" \nThe fee amout is:"<<fee 
        <<"\nThe of rate is:"<<amount<<endl;

    }
};
int main()
{
    girl k;
    k.givedatag();
    k.display();
    return 0;
}