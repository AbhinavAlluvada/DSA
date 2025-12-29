#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> anagrams(vector<string> strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto &it : mp) {
            result.push_back(it.second);
        }
        return result;
    }
};

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution sol;
    vector<vector<string>> res = sol.anagrams(strs);
    for (auto &group : res) {
        for (auto &word : group) cout << word << " ";
        cout << endl;
    }
    return 0;
}
