#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <int> arrayexcept(vector <int>& vect){
        int n = vect.size();
        vector <int> ans(n,1);
        int prefix = 1;
        for(int i =0;i<n;i++){
            ans[i] = prefix;
            prefix *= vect[i];
        }

        int suffix =1;
        for(int i = n-1;i>=0;i--){
            ans[i] *= suffix;
            suffix*= vect[i];
        }
        return ans;
    }
};
int main(){
    vector <int> vect = {1,2,3,4,5};
    Solution obj;
    vector<int> ans = obj.arrayexcept(vect);
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}