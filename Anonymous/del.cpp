#include<iostream>

using namespace std;

class Student
{
    string name;
    float marks;
    public:
    int calculate(int a)
    {
        int b=a;
        return b;
    }
};
int main()
{
    Student s;
    cout<<s.calculate(50)<<endl;;
    return 0;
}