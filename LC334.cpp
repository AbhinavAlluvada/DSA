#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool triplet(vector <int>& vect){
        int n = vect.size();
        int first = INT_MAX;
        int second = INT_MAX;
        for(int i =0;i<n;i++){
            if(vect[i]<=first){
                first = vect[i];
            }
            else if(vect[i] <= second){
                second = vect[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
};
int main(){
    Solution obj;
    vector <int> vect = {2,1,5,0,4,6};
    bool result = obj.triplet(vect);
    if(result){
        cout << "Triplet exists!"<<endl;
    }
    return 0; 
}