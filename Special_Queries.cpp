#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;

    int t;
    cin >> t;

    while(t--){
        int val;
        cin >> val;
        cin.ignore();

        string s;
        if(val == 0){
            getline(cin, s);
            q.push(s);
        }
        else{
            if(!q.empty()){
                cout << q.front() << endl;
                q.pop();
            }
            else{
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}