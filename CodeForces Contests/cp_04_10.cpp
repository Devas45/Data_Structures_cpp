#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        if(v[0] != 0)              
        {
            cout<<"0"<<endl;
            break;
        }

        
        ll s = v[n-1];
        for(ll i = 1; i < n-1;i++)
        {
            if(v[i-1] != v[i]  && v[i] != v[i+1])
            {
                s = v[i];
                break;
            }
        }

        ll ans = 0;
        for(ll i = 0; i < n; i++)
        {
            if(v[i] == 0)
            ans += s;
        }
        cout<<ans<<endl;
    }
    return 0;
}
