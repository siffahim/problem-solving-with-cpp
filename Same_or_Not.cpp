#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;

    int n,m;
    cin >> n >> m;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        st.push(x);
    }

    int y;
    for (int i = 0; i < m; i++){
        cin >> y;
        q.push(y);
    }

    bool is_same = true;
    if(n != m){
        cout << "NO" << endl;
        return 0;
    }

    while(!st.empty() && !q.empty()){
        if(st.top() != q.front()){
            is_same = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if(is_same){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}