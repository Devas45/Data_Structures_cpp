#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    bool gender;
    void inputInfo();
    void printInfo()    {cout<<name<<endl<<age<<endl<<gender<<endl;}
};
    void student::inputInfo()
    {
        cin>>name>>age>>gender;
    }
int main()
{
    student arr[3];
    for(int i=0;i<3;i++)    arr[i].inputInfo();
    for(int i=0;i<3;i++)    arr[i].printInfo();
    return 0;
}