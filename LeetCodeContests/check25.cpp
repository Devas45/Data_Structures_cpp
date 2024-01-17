#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(string num) {
        int ans = num.size();
        //flag1 = 25,flag2 = 50.flag3 = 75,flag4 = 00
        int k = 0,flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0,c = 0;
        for(int i = num.size() -1; i >= 0;i--)
        {
            c++;
            if(flag1 == 1 && num[i] == '2')        flag1 = 2;                  //25
            if(flag3 == 1 && num[i] == '7')        flag3 = 2;                  //75
            if(flag4 == 1 && num[i] == '0')        flag4 = 2;                  //00
            if(flag2 == 1 && num[i] == '5')        flag2 = 2;                  //50
            if(num[i] == '5' && flag1 == 0)        flag1 = 1; 
            if(num[i] == '0' && flag2 == 0)        flag2 = 1;
            if(num[i] == '5' && flag3 == 0)        flag3 = 1;
            if(num[i] == '0' && flag4 == 0)        flag4 = 1;
            if((flag1 == 2)||( flag2 == 2) || (flag3 == 2) || (flag4 == 2) ) 
            {
                ans = c - 2;
                break;
            }
            if(i == 0 && (flag2 == 1 ))
            {
                ans = num.size() - 1;
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    // string n;
    // cin >> n; 
    // int result = s.minimumOperations(n);

    int result = s.minimumOperations("590110");
    cout << result << endl;
    return 0;
}
