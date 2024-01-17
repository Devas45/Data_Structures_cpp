#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {

        //inputs : 
        ll n, a, b, ans; 
        cin >> n >> a >> b;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        //processing :
        sort(v.begin(), v.end());
        for(ll i = 0 ; i < a; i++)
        {
            if(v[i] < 0)
            {
                auto it = std::find(v.begin(), v.end(), v[i]);
                if (it != v.end())               v.erase(it);
            }
        }

        for (ll i = v.size(); i >= v.size() - b; i--) 
        {
            if (v[i] < 0) {
                v[i] *= -1;
            }
        }


        ans = accumulate(v.begin(), v.end(), 0);
        cout << ans << endl;
    }
    return 0;
}
