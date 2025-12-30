#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestsubstr(string str){
        int n = str.size();
        int left =0 , right = 0 , maxlen =0;
        vector <int> vect (256,0);
        while(left<n){
            if(right < n && vect[str[right]] == 0){
                vect[str[right++]]++;
                maxlen = max(maxlen, right -left);
            }
            else{
                vect[str[left++]]--;
            }
        }
        return maxlen;
    }
};
int main(){
    Solution obj;
    string str = "";
    cout << obj.longestsubstr(str)<<endl;
    return 0;
}