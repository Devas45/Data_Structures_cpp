#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll check_mini(vector<ll>& v) {
    ll ans = v[0];
    if (v[0] != 0) return 0;

    for (ll i = 1; i < v.size(); i++) 
    {
        if (ans + 1 != v[i]) return ans+1;
        ans = v[i];
    }
    return ans;
}

int main()
{
    ll t;
    t = 1;
    while(t != 0)
    {
        ll n,k,cond = 0,get;
        n = 5;
        vector<ll> v = {1,2,3,0,7},ans;
        sort(v.begin(),v.end());
        get = check_mini(v);
        v.push_back(get);
        ans.push_back(get);
        sort(v.begin(),v.end());
        cin>>k;
        while(true)
        {
            if(k == -1)                     break;
            if(k == -2)                     {cond = 2;break;}
            auto it = find(v.begin(),v.end(), k);
            if (it != v.end()) 
            {
               v.erase(it);
            }
            get = check_mini(v);
            v.push_back(get);
            ans.push_back(get);
            sort(v.begin(),v.end());
            get = check_mini(v);
            cin>>k;
        }
        for(ll i=0;i<ans.size() && cond != 2;i++)
        {
            cout<<ans[i]<<endl;
        }
        --t;
    }
    return 0;
}

