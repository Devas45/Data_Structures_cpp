#include<string>
#include <bits/stdc++.h>

using namespace std;
class Solution
{
   public:
   string longestPalSubstr(string str)
{
	int maxLength = 1, start = 0;

	for (int i = 0; i < str.length(); i++)
	{
		for (int j =str.size()-1; j >=0; j--) {
			int flag = 1;

			for (int k = 0; k < (j - i + 1) / 2; k++)
				if (str[i + k] != str[j - k])
					flag = 0;

			if (flag && (j - i + 1) > maxLength) {
				start = i;
				maxLength = j - i + 1;
			}
		}
	}

	str=str.substr(start,maxLength);
	return str;
}
};

int main()
{
    Solution s;
	string str;
	getline(cin,str);
    cout<<s.longestPalSubstr(str)<<endl;
	return 0;
}
