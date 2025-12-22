#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> vect = {1,2,3};
    vector <int> vect2 = {4,5,6};
    vect.insert(vect.end(),vect2.begin(),vect2.end());
    for(int i: vect){
        cout << i << " ";
    }
    cout << endl;
}