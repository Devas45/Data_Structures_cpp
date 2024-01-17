#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:

    int countPrice(int n,int b)
    {
        n = n & b;
        int ans = 0;
        while(n > 0)
        {
            if(n & 1)             ++ans;
            n = n >> 1;
        }
        return ans;
    }

    int calc(int a) 
    {
        int i = pow(2,a-1),m = a; 
        int cnt = 1; 
        while (i < 32768)
        {
            cnt++;
            a = m * cnt;
            i += pow(2,a-1);
        }
        bitset<16>binaryRepresentationI(i);
        cout << "Binary representation of i: " << binaryRepresentationI << endl;
        return i;
    }
    int findMaximumNumber(int maxi, int x)
    {
        vector<int>v;
        int p = 0, m  = 0,d = calc(x),l = 0;
        while(p < maxi)
        {
            int k = countPrice(m,d);
            p += k;
            if(k != 0 && p <= maxi)       {v.push_back(m);}
            ++m;
        }
        return v.back();
    }
};

int main()
{
    Solution s;
    int a,b;
    cin>>a>>b;
    cout<<endl<<s.findMaximumNumber(a,b)<<endl;
    return 0;
}