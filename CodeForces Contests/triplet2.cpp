#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int sumOfBeauties(vector<int>& nums) 
    // // {
    //     long long n = nums.size(),flag = 0;
    //     vector<int> v(n-2, 0); 
        
    //     for (int i = 1; i < n - 1; i++) {
    //         if (nums[i] > nums[i-1] && nums[i] < nums[i+1]) {
    //             v[i-1] = 1;
    //         }
    //         else{
    //             v[i-1] = 0;
    //             flag = 1; 
    //         }
    //     }
    //     if(flag == 0){
    //         return (n-2) * 2; 
    //     }

    //     int beautySum = 0;
    //     for (int i = 0; i < n - 2; i++) {
    //         beautySum += v[i];
    //     }

    //     return beautySum;
    // }
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        vector<int> minRight(n, 0); 
        minRight[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 2; i--){
            minRight[i] = min(minRight[i + 1], nums[i]);           
        }  
        int maxLeft = nums[0], ans = 0;
        for(int i = 1; i < n - 1; i++)
        {
            if(nums[i] > maxLeft && nums[i] < minRight[i + 1]) 
                ans += 2;
            else if(nums[i] > nums[i - 1] && nums[i] < nums[i + 1]) 
                ans += 1;
            maxLeft = max(nums[i], maxLeft); 
        }   
        return ans;
    } 
};


int main() {
    Solution s;

    string str ;
    cin>>str;
    vector<int> v;

    str.erase(remove_if(str.begin(), str.end(), [](char c) {
        return c == '[' || c == ']' || c == ' ';
    }), str.end());

    istringstream ss(str);
    string token;
    while (getline(ss, token, ',')) {
        if (!token.empty()) 
        { 
            v.push_back(stoi(token));
        }
    }
    
    cout<<s.sumOfBeauties(v)<<endl;

    return 0;
}




