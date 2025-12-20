
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++)
        {
            int need = target - nums[i];
            if (seen.count(need))
            {
                return {seen[need], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> ans = s.twoSum(nums, target);
    for (int i : ans)
        cout << i << " ";
    return 0;
}
