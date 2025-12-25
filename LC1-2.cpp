#include <bits/stdc++.h>
using namespace std;
pair<int,int> twosum(const vector <int>& vect,int target){
    unordered_map <int,int> seen;
    for(int i =0;i<vect.size();i++){
        int need = target - vect[i];
        if(seen.count(need)){
            return {seen[need],i};
        }
        seen[vect[i]] = i;
    }
    return {};
}
int main(){
    vector <int> vect = {3,5,8,13,13};
    pair<int,int> result = twosum(vect,13);
    cout << result.first << ", "<<result.second <<endl;
    return 0;
}