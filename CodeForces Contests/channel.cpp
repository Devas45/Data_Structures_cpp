#include<bits/stdc++.h>
using namespace std;

void solve(int n,int io,int no,const string& s)
{
    if(n == io)                { cout<<"YES"<<endl; return;}                 // Yes

    int cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '-')          {break;}
        cnt1++;
    }
    if(cnt1 + io == n)         { cout<<"YES"<<endl; return;}

    int read = cnt1 + io;
    for (char c : s) 
    {
        if (c == '+') 
        {
            cnt2++;
            if (cnt2 == n)
            {
                cout<<"YES"<<endl;return;
            }
        } else {
            cnt2 = 0;
        }
    }
    int i = cnt1;
    while(i < s.size())
    {
        if (s[i] == '+' && cnt4 != read) 
        {
            cnt3++;
            if (cnt3 + read == n)
            {
                cout<<"MAYBE"<<endl;return;
            }
            read++;
        }
        if(s[i] == '-') 
        {
            cnt4++;
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main()
{

    // int t,n,io,no;
    // cin>>t;
    // while(t != 0)
    // {
    //     string s;
    //     cin>>n>>io>>no;
    //     getline(cin,s);
    //     solve(n,io,no,s);
    //     t--;
    // }
    solve(5,3,2,"++");
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// string solve(int n, int a, int q,string notifications) {
//     vector<int> prefix_sum(q + 1, 0);

//     for (int i = 0; i < q; ++i) {
//         if (notifications[i] == '+') {
//             prefix_sum[i + 1] = prefix_sum[i] + 1;
//         } else {
//             prefix_sum[i + 1] = prefix_sum[i] - 1;
//         }
//     }

//     int min_online = a - *max_element(prefix_sum.begin(), prefix_sum.end());
//     int max_online = a + *min_element(prefix_sum.begin(), prefix_sum.end());

//     if (min_online <= n - 1 && max_online >= 1) {
//         return "MAYBE";
//     } else if (min_online <= n - 1) {
//         return "YES";
//     } else {
//         return "NO";
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; ++i) {
//         int n, a, q;
//         cin >> n >> a >> q;
//         string notifications;
//         cin >> notifications;
//         string result = solve(n, a, q, notifications);
//         cout << result << endl;
//     }
//     return 0;
// }





