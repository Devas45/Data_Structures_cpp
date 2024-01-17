#include<bits/stdc++.h>
using namespace std;

int P(int n, int x, int y)
{
    int i = n / x, j = n / y;
    int gcd_ij = __gcd(i, j);  

    int k = n / ((i * j) / gcd_ij);

    int ans = 0;
    for (int a = 0; a < i - k; a++)
    {
        ans += n;
        n--;
    }
    for (int a = 0; a < j - k; a++)
    {
        ans += a + 1;
    }

    return ans;
}

int main()
{
    int n = 100, x = 20, y = 50;
    cout << P(n, x, y) << endl;

    // int t;
    // cin >> t;
    // while (t > 0)
    // {
    //     int n, x, y;
    //     cin >> n >> x >> y;
    //     cout << P(n, x, y) << endl;
    //     t--;
    // }
    return 0;
}
