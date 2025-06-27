#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    while(q--){
        int x;
        cin >> x;
        int flag = 0;

        for (int i = 1; i <= n; i++){
            if(v[i] == x){
                flag = 1;
            }
        }

        if(flag){
            cout << "found\n";
        }
        else{
            cout << "not found\n";
        }
    }

    return 0;
}