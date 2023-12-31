#include<iostream>
using namespace std;
class result
{
     public:
    int math,eng,nepali;
    result(int x, int y)
    {
        math=x;
        eng=y;
        nepali=30;
    }
    void display()
    {
        cout<<"Marks of maths:"<<math<<endl;
        cout<<"marks of english:"<<eng<<endl;
        cout<<"Marks of nepali:"<<nepali<<endl;
        
    }
    
    void operator++(void)
    {
        math++;
        eng++;
        nepali++;
    }
};
int main()
{
    result bishal(50, 60);
    bishal.display();
   
    ++bishal;
    bishal.display();
    return 0;
}
