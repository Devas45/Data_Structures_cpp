#include<bits/stdc++.h>
#define ll long long
using namespace std;

void  p(vector<ll>arr,ll n)
{
    vector<vector<ll>> t(n,vector<ll>(3,0));

    //alloting vector
    for(ll i=0;i<n;i++)
    {
        t[i][0] = arr[i];
        t[i][1] = i; 
    }
    sort(t.begin(), t.end(), [](const vector<ll>& a, const vector<ll>& b) {return a[0] > b[0];});

    for(ll i=0;i<n;i++)
    {
        t[i][2] = i+1;
    }

    sort(t.begin(), t.end(), [](const vector<ll>& a, const vector<ll>& b) {return a[1] < b[1];});


    for(ll i = 0; i < n; i++)
    {
        cout<<t[i][2]<<" ";
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t > 0)
    {
        ll n;
        cin>>n;
        vector<ll> vect(n);
        for(ll i = 0; i < n; i++)
        {
            cin>>vect[i];
        }
        p(vect,n);
        cout<<endl;
        t--;
    }
    return 0;
}
