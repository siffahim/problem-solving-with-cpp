#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> v2;
    int flag = 0;
    for (int i = 0; i < n; i++){
        vector<int>::iterator it = find(v2.begin(), v2.end(), v[i]);
        if(it == v2.end()){
            v2.push_back(v[i]);
        }
        else{
            flag = 1;
        }
    }

    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}