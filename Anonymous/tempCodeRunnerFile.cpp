#include<bits/stdc++.h>
using namespace std;

class stack
{
    //properties
    int *arr;
    int top;
    int size;

    public:
    //behviour
    stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int ele)
    {
        if(size - top > 1){
            top++;
            arr[top] = ele;
        }
        else{
            cout<<"Stack OverFlow! "<<endl;
        }
    }

    void pop()
    {
        if(top >= 0) top--;
        else         cout<<"stack OverFlow!"<,endl;
    }

    int peek()
    {
        if(top >= 0 && top < size)    return arr[top];
        else                          cout<<"Stack is empty! "<<endl;
    }
};



int main()
{
    // stack<int>s;
    // s.push(2);
    // s.push(4);
    // s.push(7);
    // s.pop();

    // cout<<"Top : "<<s.top()<<endl;
    // if(s.empty()) cout<<"Empty Stack!"<<endl;
    // else          cout<<"Non-Empty Stack!"<<endl;
    stack st(5);
    st.push(22);
    st.push(89);
    st.push(90);
    st.pop();

    cout<<st.peek()<<endl;
    return 0;
}