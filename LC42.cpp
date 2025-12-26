#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int trapwater(vector<int>& vect){
        int n = vect.size();
        vector<int> leftmax(n),rightmax(n);
        int water =0;
        leftmax[0] = vect[0];
        for(int i =1;i<n;i++){
            leftmax[i] = max(vect[i],leftmax[i-1]);
        }
        rightmax[n-1] = vect[n-1];
        for(int i =n-2;i>=0;i--){
            rightmax[i] = max(vect[i],rightmax[i+1]);
        }
        for(int i =0;i<n;i++){
            water+= min(leftmax[i],rightmax[i]) - vect[i];
        }
        return water;
    }
};
int main(){
    Solution obj;
    vector <int> vect = {0,1,0,2,1,0,1,3,2,1,2,1};
    int water = obj.trapwater(vect);
    cout << "Water Trapped: "<<water <<endl;
    return 0;
}