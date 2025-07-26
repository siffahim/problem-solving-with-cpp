#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        stack<int> st;
        string s;
        cin >> s;

        for(char c : s){
            if(c == '1'){
                if(!st.empty() && st.top() == '0'){
                    st.pop();
                } else{
                    st.push(c);
                }
            }else{
                st.push(c);
            }
        }

        if (st.empty()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}