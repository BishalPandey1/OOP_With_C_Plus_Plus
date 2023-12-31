#include<iostream>
using namespace std;
class marks
{
    int sci, mat;
    public:
    marks(int d, int t)
    {
     sci=d;
     mat=t;
    }
    void show()
    {
        cout<<"The marks of Science is="<<sci<<endl;
        cout<<"The marks of Math is ="<<mat<<endl;
    }
    operator--(void)
    {
        sci--;
        mat--;
    }
};
int main()
{
    marks obj(44, 55);
    obj.show();
    --obj;
    obj.show();
    return 0;
}