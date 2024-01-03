#include<iostream>
using namespace std;
class student 
{
    int marks;
    public:
    void setmarks(int practicalmarks, int theorymarks)
    {
        marks = practicalmarks + theorymarks;

    }
    int getmarks()
    {
        return marks;
    }
};
int main()
{
    student s1;
    s1.setmarks(22, 47);
    cout<<"Total marks ="<<s1.getmarks();
    return 0;
}