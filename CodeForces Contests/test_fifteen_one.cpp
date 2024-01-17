#include <bits/stdc++.h>
#include<bitset>
using namespace std;

int calc(int a) 
{
    int i = pow(2,a-1),m = a; 
    int cnt = 1; 
    while (i < 512) 
    {
        cnt++;
        a = m * cnt;
        bitset<8> binaryRepresentationI(i);
        cout << "Binary representation of i: " << binaryRepresentationI << endl;
        i += pow(2,a-1);
    }
    return m | i;
}

int main() {
    int n;
    cin>>n;
    int result = calc(n); 
    return 0;
}
