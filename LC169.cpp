#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vect = {3,3,3,2,2,2,};
    int candidate = 0;
    int count = 0;
    for(int i : vect){
        if(count == 0){
            candidate = i;
        }
        count += (i == candidate) ? 1:-1;
    }
    cout << candidate << endl;
}