#include <bits/stdc++.h>
using namespace std;
void print(const vector <int>& vect){
    for(auto itr = vect.begin();itr!= vect.end();itr++){
        cout << *itr << " ";
    }
    cout << endl;
}
int main(){
    vector <int> vect = {1,2,3};
    vector <int> vect2 = {4,5,6};
    int k = vect.size()-1;
    print(vect);
    cout << "k: "<<k<<endl;

    vect[k--] = 0;
    print(vect);
    cout << "k: "<<k<<endl;

    return 0;
}