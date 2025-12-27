#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        for(char c: s){
            arr[c-'a']++;
        }
        for(int i =0;i<s.size();i++){
            if(arr[s[i]-'a' == 1]){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.firstUniqChar(s);
    return 0;
}
