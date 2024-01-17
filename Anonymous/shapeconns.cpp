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
        cout<<area<<" "<<peri<<endl;
    }
    Shape(float a,float b)
    {
        float area=a*b;
        float peri=2*(a+b);
        cout<<area<<" "<<peri<<endl;
    }
    Shape(float s1,float s2,float s3)
    {
        float s=(s1+s2+s3)/2;
        float area=s*(s-s1)*(s-s2)*(s-s3);
        float peri=s1+s2+s3;
        cout<<area<<" "<<peri;
    }
};

int main()
{
    Shape circle(4);
    Shape square(2,3);
    Shape triangle(6,3,4);
    return 0;
}
