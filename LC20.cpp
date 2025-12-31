#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool parenthesis(string str){
        stack <char> stk;
        for(char c : str){
            if(c == '{' || c == '[' || c == '('){
                stk.push(c);
            }
            else{
                if(stk.empty()) return false;
                if((c == '}' && stk.top()!= '{') ||
                    (c == ']' && stk.top()!= '[') ||
                    (c == ')' && stk.top()!= '(')){
                        return false;;
                    }
                stk.pop();
            }

        }
        return stk.empty();
    }
};
int main(){
    Solution obj;
    string str = "{[]}";
    if(obj.parenthesis(str)){
        cout << "Perfecto!"<<endl;
    }
    return 0;
}