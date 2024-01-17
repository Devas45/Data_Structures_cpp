#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {

        if(s.compare(p) == 0)         return true;
        size_t found1 = p.find('.');
        size_t found2 = p.find('*');
        
        if(found1 != string::npos)
        {
            p[found1]=s[found1-1];
            if(s.compare(p) == 0)      return true;
        }
            
        if(found2 != string::npos)
        {
             p.erase(found2  ,1);
             if(s.compare(p) == 0)      return true;
             else
             {
                 p[found2]=p[found2-1];  
                 if(s.compare(p) == 0)  return true;
             }
        }
    return false;
    }
};

int main()
{
    Solution S;
    string s1,s2;
    // getline(cin,s1);
    // getline(cin,s2);
    s1='ab',s2='.*';
    cout<<S.isMatch(s1,s2)<<endl;
    
    return 0;
}
