#include<iostream>
using namespace std;
class Employee
{
    int id;
     int salary;
      public:
      void setId(void)
      {
        salary =122;
        cout<<"Enter the id of employee";
        cin>>id;
         
      }
      void getId(void)
      {
    
      cout<<"Enter the id of employee"<<endl;
      }
};
int main()
{
    Employee fb[4];
    for(int i=0; i<=4;i++)
    {
    fb[i].getId();
    fb[i].setId();
    }
    return 0;
}