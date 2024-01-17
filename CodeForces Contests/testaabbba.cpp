#include <bits/stdc++.h>
#define ll long long
using namespace std;

void f(string s)
{
    vector<ll> v;
    ll a = 0, b = 0, cnt = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            a++;
        if (s[i] == 'B')
        {
            v.push_back(a);
            a = 0;
            b++;
        }
        if (s[i] == 'B' && s[i] == s[i + 1])
            cnt = 1;
    }
    if(v.size() != 0)          a = 1; 
    for (ll i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'B' || i == 0)
        {
            v.push_back(s.length() - i - 1);
            break;
        }
    }

    ll ans = accumulate(v.begin(), v.end(), 0);
    if (a == 0 || b == 0)
        {cout << "0" << endl;return;}
    if (cnt == 0)
        {cout << ans - *min_element(v.begin(), v.end()) << endl;return;} 
    else
        {cout << ans << endl;return;}
}


int main()
{
    ll t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        cout<<endl;
        f(s);
    }
    return 0;
}
