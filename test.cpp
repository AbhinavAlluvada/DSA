#include <bits/stdc++.h>
using namespace std;
void print(const vector <int>& vect){
    for(auto itr = vect.begin();itr!= vect.end();itr++){
        cout << *itr << " ";
    }
    cout << endl;
}
int main(){
    int n = 5;
    int fact = 1;
    for(int i =1;i<n;i++){
        fact = fact * i;
        cout << fact << endl;
    }
    cout << "-------------"<<endl;
    int fact2 =1;
    for(int i = n-1;i>=0;i--){
        fact2 = fact2* i;
        cout << fact2 <<endl;
    }
    return 0;
}