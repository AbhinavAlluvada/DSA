#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        int i = n-1;
        if(n==1){
            return 1;
        }
        while(i>0){
            if(isalnum(s[i])){
                count++;
                if(!isalnum(s[i-1])){
                    break;
                } 
            }
            i--;
        }
        return count;
    }
};

int main() {
    Solution sol;
    string s = "a";
    cout << sol.lengthOfLastWord(s);
    return 0;
}
