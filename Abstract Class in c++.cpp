#include<iostream>
using namespace std;
class figure 
{
    public:
    virtual int Area()= 0;
    void setBreadth(int br)
    {
        breadth = br;
    }
    void setHeight(int ht)
    {
        height = ht;
    
    }
    protected:
    int breadth;
    int height;
};
class Rectangle: public figure
{
    public:
    int Area()
    {
        return (breadth * height);
    }
};
class Triangle : public figure
{
    public:
    int Area()
    {
        return (breadth * height) /2;
    }
};
int main()
{
    Rectangle R1;
    Triangle T1;
    R1.setBreadth(12);
    R1.setHeight(17);
    T1.setBreadth(74);
    T1.setHeight(9);
    cout<<"The area of the rectangle is:"<<R1. Area()<<endl;
    cout<<"The area o the trianlge is:"<<T1. Area()<<endl;
    return 0;
}