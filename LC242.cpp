#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ="rat1";
    string t = "car1";
    if(s.size()!=t.size()){
        cout << "Nop!"<<endl;
        return 0;
    }
    unordered_map <char,int> cmap;
    for(char c : s){
        cmap[c]++;
    }
    unordered_map <char,int> dmap;
    for(char d : t){
        dmap[d]++;
    }
    if(cmap!=dmap){
        cout << "Nope!"<<endl;
    }
    cout << "yep!"<<endl; 
}