#include <bits/stdc++.h>
#include <map>

using namespace std;

int musical_puzzle(int length,string s)
{
    int cnt = 0,no=0;
    string copy = s;
    map<string,int>compare;
    
    for(int i=0;i<length;i++)
    {   
        compare.insert(pair<string,int>(s.substr(i,2),i));
        no++;
    }

    for(int i=0;i<no-1;i++)
    {
        string substr = copy.substr(i,2);
        if(compare.find(substr) == compare.end());
        cnt++;
    }

    return cnt;
}


int main()
{
    int test_cases;
    cin>>test_cases;


    for(int i=0;i<test_cases;i++)
    {
        int len;
        string s;
        cin>>len;
        getline(cin,s);
        cout<<musical_puzzle(len,s)<<endl;
    }
    return 0;
}