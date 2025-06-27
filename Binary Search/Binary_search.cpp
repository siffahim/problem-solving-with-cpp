#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int val;
    cin >> val;
    int flag = 0;

    int l = 0;
    int r = n - 1;
    while(l<=r){
        int mid = (l + r) / 2;
        if(v[mid] == val){
            flag = 1;
            break;
        }
        else if(v[mid] > val){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    if(flag){
        cout << "Found\n";
    }
    else{
        cout << "Not found\n";
    }

    return 0; 
}