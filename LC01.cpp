
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {0, 0};
    }
    vector<int> twoSum2(vector<int> &nums,int target){
        unordered_map <int,int> map;
        for(int i =0;i<nums.size();i++){
            int need = target - nums[i];
            if(map.count(need)){
                return {map[need],i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> ans = s.twoSum2(nums, target);
    for (int i : ans)
        cout << i << " ";
    return 0;
}
