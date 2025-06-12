#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool is_jessica = 0;

    while(ss >> word){
        if(word == "Jessica"){
            is_jessica = 1;
        }
    }

    if(is_jessica){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}