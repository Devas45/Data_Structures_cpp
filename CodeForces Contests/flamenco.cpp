#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int factorial(int k)
{
    if (k == 1 || k == 0)
        return 1;
    for (int i = k-1; i > 1; i--)
    {
        k *= i;
    }
    return k;
}

int flamenco_puzzle(int n, int s, vector<int> arr)
{
    const unsigned int M = 1000000007;
    int comb = 0;
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n ; i++)
    {
        int j = i + 1;
        int cnt = 1, k = 1;
        while (j < n)
        {
            if (abs(arr[j] - arr[i]) <= s && cnt < s)
            {
                if (arr[i] != arr[j])
                {
                    ++cnt;
                    j++;
                    continue;
                }
                else if (arr[j] == arr[i])
                {
                    ++j;
                    k++;
                    continue;
                }
            }
            else       break;   
        }
        if (cnt == 4)
        {
            int f = factorial(k);
            comb += f ;
        }
    }

    return comb % M;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int l, s;
        cin >> l >> s;
        vector<int> test(l);

        for (int j = 0; j < l; j++)
        {
            cin >> test[j];
        }

        cout << flamenco_puzzle(l, s, test) << endl;
    }

    return 0;
}
