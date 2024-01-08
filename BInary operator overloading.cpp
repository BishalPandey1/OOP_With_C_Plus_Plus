#include<iostream>
using namespace std;
class salary
{
    int sal;
    public:
    salary()
    {

    }
    salary(int a)
    {
        sal= a;
    }
    void dispaly()
    {
        cout<<"Salary = " <<sal <<endl;
    }
    salary operator+(salary t)
    {
        salary temp;
        temp.sal = sal + t.sal;
        return temp;
    }

};
int main()
{
    salary p1, p2, p3;
    p1 = salary(1000);
    p2 = salary(2000);
    p1.dispaly();
    p2.dispaly();
    p3 = p1 + p2;
    p3.dispaly();
    return 0;
}