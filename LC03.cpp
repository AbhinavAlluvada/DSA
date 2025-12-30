#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vect(256, 0);
        int n = s.size();
        int maxlen = 0;
        int right = 0;
        int left = 0;

        while (left < n) {
            if (right < n && vect[s[right]] == 0) {
                vect[s[right++]]++;
                maxlen = max(maxlen, right - left);
            } else {
                vect[s[left++]]--;
            }
        }
        return maxlen;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.lengthOfLongestSubstring(s);
    return 0;
}
