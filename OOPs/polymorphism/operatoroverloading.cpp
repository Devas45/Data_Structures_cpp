#include<iostream>
#include<math.h>
using namespace std;
class Complex
{
    int real,img;
    public:
    void input()
    {
        cout<<"Input real and imginary parts of complex no.";
        cin>>real>>img;
    }
    void display(){
        cout<<real<<"+ i"<<img;

    }
    // Complex operator +(Complex c2)
    // {
    //     Complex c3;
    //     c3.real=real+c2.real;
    //     c3.img=img+c2.img;
    //     return c3;
    // }
    Complex operator *(Complex c2)
    {
        Complex c3;
        c3.real=real*c2.real-img*c2.img;
        c3.img=real*c2.img+img*c2.real;
        return c3;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    // c3=c1+c2;
    // c3.display();
    c3=c1*c2;
    c3.display();
    return 0;
}