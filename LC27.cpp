#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slptr =0;
        for(int fsptr = 0; fsptr <nums.size();fsptr++){
            if(nums[fsptr] != val){
                nums[slptr++] = nums[fsptr];
            }
        }
        return slptr;
    }
};

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    Solution s;
    int k = s.removeElement(nums, val);
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
