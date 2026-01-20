#include <bits/stdc++.h>
using namespace std; 

class MyStack {
public:
    queue<int> q;

    MyStack() {}

    void push(int x) {
        q.push(x);
        for (int i = 0; i < (int)q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int temp = q.front();
        q.pop();
        return temp;
    }

    int top() {
        if (q.empty()) return 0;
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
 
int main() {
    MyStack st; 
    st.push(1);  
    st.push(2); 
    st.push(3);
    st.push(3);
    st.push(4);
    st.push(5); 
    cout << st.top() << endl; 
    cout << st.pop() << endl;
    cout << st.top() << endl;
    cout << st.empty() << endl;
    return 0; 
}
