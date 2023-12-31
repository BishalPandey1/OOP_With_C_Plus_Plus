#include <iostream>
using namespace std;
class constructor
{
    public:
    double area;
    constructor()
    {
        area = 0;
    }
    constructor(int a, int b)
    {
        area= a *b;

    }
    void display()
    {
        cout<< area <<endl;
    }
};
int main()
{
    constructor t;
    constructor m(20, 70);

    t.display();
    m.display();
}