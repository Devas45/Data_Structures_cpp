#include<bits/stdc++.h>
using namespace std;
 
bool checkPrime(long long n)
{
    long long i;
    if (n <= 1)
        return false;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
 
void solve(string s,int n)
{
    int flag = 0;
    long long int k = stoi(s);
    if(checkPrime(k))  {cout<<k<<endl;return;}
    
    for(int i = 0 ;i < s.size() - n + 1;i++)
    {
        int j = i + n;
        string st = s;
        long long int m = stoi(st.substr(i, n));
        if(checkPrime(m))                  {return;}
    }

}

int main()
{
    int t;
    cin>>t;
    string str;
    while( t != 0 )
    {
        getline(cin, str);
        solve(str,8);
        --t;
    }
    return 0;
}