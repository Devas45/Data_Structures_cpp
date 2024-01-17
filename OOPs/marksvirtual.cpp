#include<iostream>
using namespace std;

class Marks
{
    public:
    virtual float input_marks(float a)=0;
};

class Maths : public Marks
{
    protected:
    float m1;
    public:
    float input_marks(float a)
    {
        m1=a;
        return m1;
    }
};

class Science : public Marks
{
    protected:
    float m2;
    public:
    float input_marks(float a)
    {
        m2=a;
        return m2;
    }
};

class English : public Marks
{
    protected:
    float m3;
    public:
    float input_marks(float a)
    {
        m3=a;
        return m3;
    }
};

class Total : public English,public Science,public Maths
{
    protected:
    int sum;
    public:
    void print()
    {
        cout<<m1<<" "<<m2<<" "<<m3<<endl;
    }
    void add()
    {
        sum=m1+m2+m3;
        cout<<"sum"<<"->"<<sum<<endl;
    }
};

int main()
{
    Marks *p;
    
    Maths m;
    Science s;
    English e;

    p=&m;
    p->input_marks(52);

    p=&e;
    p->input_marks(32);

    p=&s;
    p->input_marks(70);

    Total t;
    t.add();

    return 0;
}