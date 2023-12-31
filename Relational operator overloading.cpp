#include<iostream>
using namespace std;
class student 
{
    int feet=0;
    int inches=0;
    public:
    void getHeight(int f, int i)
    {
        feet=f;
        inches=i;
    }
    bool operator>(const student &s2)
    {
        if(feet > s2.feet)
        return true;
        else if (feet == s2.feet&& inches > s2.inches)
        return true;
        return false;
    }
};
int main()
{
    student s1, s2;
    s1.getHeight(6,1);
    s2.getHeight(5,6);
    if(s1> s2)
    cout<<"Student 1 is taller"<<endl;
    else if (s2 > s1)
    cout<<"student 2 is taller"<<endl;
    else 
    cout<<"Both have equal height"<<endl;
    return 0;
}