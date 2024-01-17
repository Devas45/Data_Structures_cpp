#include<iostream>
#include<math.h>

using namespace std;

class Shape
{
    float area,peri;
    public:
    Shape(float r)
    {
        float area=3.14*r*r;
        float peri=2*3.14*r;
        cout<<area<<peri;
    }
    Shape(float a,float b)
    {
        float area=a*b;
        float peri=2(a+b);
        cout<<area<<peri;
    }
    Shape(float s1,float s2,float s3)
    {
        float s=(s1+s2+s3)/2;
        float area=s*(s-a)*(s-c)*(s-b);
        float peri=a+b+c;
        cout<<area<<peri;
    }
}

int main()
{
    Shape s;
    s.Shape(4);
    s.Shape(2,3);
    s.Shape(6,3,4);
    return 0;
}
