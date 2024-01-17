#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll P(ll n, ll x, ll y)
{
    ll i = n / x, j = n / y;
    ll gcd_ij = __gcd(x, y);  
    ll k = n / ((x * y) / gcd_ij);
    ll ind1 = i - k;
    ll ind2 = j - k;
    ll ans = (n * (n+1) / 2) - ((n - ind1) * (n - ind1 + 1) / 2 ) - (ind2 * (ind2 + 1) / 2);

    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        cout << P(n, x, y) << endl;
        t--;
    }
    return 0;
}

