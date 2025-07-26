#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    int y;
    for (int i = 0; i < n; i++){
        cin >> y;
        q.push(y);
    }

    bool is_same = true;
    if(n != m){
        is_same = false;
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
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}