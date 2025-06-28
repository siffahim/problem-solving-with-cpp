#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + a[i];
    }

    //reverse here
    int i = 0;
    int j = n - 1;
    while(i<j){
        long long int swap = pre[i];
        pre[i] = pre[j];
        pre[j] = swap;

        i++;
        j--;
    }

    for(long long int i: pre){
        cout << i << " ";
    }

    return 0;
}