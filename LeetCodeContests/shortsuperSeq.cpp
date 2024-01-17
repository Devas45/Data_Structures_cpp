#include<bits/stdc++.h>
using namespace std;

string printLCS(string &a, string &b) {
    int m = a.size(), n = b.size(), i, j;
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    i = m, j = n;
    vector<char> vect;
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            vect.push_back(a[i - 1]);
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    reverse(vect.begin(), vect.end());
    string str(vect.begin(), vect.end());
    return str;
}

string shortestSupersequence(string a, string b) {
    string c = printLCS(a, b);
    string l = a + b;

    // String matching
    for (int j = 0; j < c.size(); j++) {
        size_t found = l.find(c[j]);
        if (found != string::npos) {
            l.erase(found, 1);
        } else
            continue;
    }

    return l;
}

int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1 >> s2;
        cout << shortestSupersequence(s1, s2) << endl;
    }
    return 0;
}
