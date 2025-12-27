#include <bits/stdc++.h>
using namespace std;
void print(const vector <int>& vect){
    for(auto itr = vect.begin();itr!= vect.end();itr++){
        cout << *itr << " ";
    }
    cout << endl;
}
int main(){
    string str;
    getline(cin , str);
    cout << str << endl;
    string str2;
    getline(cin, str2);
    cout << str2 <<endl;
    string str3 = str + str2;
    cout << str3 << endl;
    return 0;
}