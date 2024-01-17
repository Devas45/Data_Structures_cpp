#include<bits/stdc++.h>
using namespace std; 

void solve(int n,int io,int no, string s)
{
    int read = io;
    if(read == n)                { cout<<"YES"<<endl; return;}                 

    int minus = 0,minuso = -1,pluso = -1,plus = 0,k =-1;
    for(int i = io;i < no;i++)
    {
            if(s[i] == '-')            {minus++;minuso++;pluso = -1;}
            if(s[i] == '+')            {plus++; pluso++; minuso = -1;}
            if(pluso + read + 1 == n)
            {
                cout<<"YES"<<endl;return;
            }
            if(read + plus == n && minus <= plus) 
            {
                  k = 0;
            }           
            read += pluso + 1;
            if(plus - pluso > minus)     read+=plus-pluso;
            continue;       
    }

    if(k == 0)                  {cout<<"MAYBE"<<endl; return;}
    else                        {cout<<"NO"<<endl;    return;
}
}

int main()
{
    int t, n, io, no;
    cin >> t;
    cin.ignore(); 

    while (t != 0)
    {
        string s;
        cin >> n >> io >> no;
        cin.ignore(); 
        getline(cin, s);
        solve(n, io, no, s);
        t--;
    }
    return 0;
}