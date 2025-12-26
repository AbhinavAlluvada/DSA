#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxsumarray(vector <int>& vect)  {
        int n = vect.size();
        if(n<=1){
            return vect[0];
        }
        int current = vect[0];
        int maxima = vect[0];
        for(int i =1;i<n;i++){
            current = max(vect[i],vect[i] + current);
            if(current>maxima){
                maxima = current;
            }
        }
        return maxima;
    } 
};
int main(){
    Solution obj;
    vector <int> vect = {-2,1,-3,4,-1,2,1,-5,4};
    int result = obj.maxsumarray(vect);
    cout << result <<endl;
    return 0;
}