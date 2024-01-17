#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

string find_prime_sequence(vector<int>& digits) {
    int total_sum = 0;
    for (int digit : digits) {
        total_sum += digit;
    }
    if (is_prime(total_sum)) {
        string result;
        for (int digit : digits) {
            result += to_string(digit);
        }
        return result;
    }
    do {
        int current_num = 0;
        for (int digit : digits) {
            current_num = current_num * 10 + digit;
            if (is_prime(current_num)) {
                return to_string(current_num);
            }
        }
    } while (next_permutation(digits.begin(), digits.end()));
    return "-1";
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        vector<int> digits(9);
        for (int j = 0; j < 9; ++j) {
            cin >> digits[j];
        }
        string result = find_prime_sequence(digits);
        cout << result << endl;
    }
    return 0;
}