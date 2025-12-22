
#include <bits/stdc++.h>
    using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != nums[k])
            {
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    Solution s;
    int k = s.removeDuplicates(nums);
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}