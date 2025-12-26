#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        if(k==0){
            return;
        }
        k = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

int main(){
    Solution obj;
    vector<int> vect = {1,2,3,4,5,6,7};
    int k = 4;
    obj.rotate(vect,k);
    for(int i : vect){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}