#include <bits/stdc++.h>
using namespace std;

int main(){

    char s[1000000];
    cin.getline(s, 1000000);

    stringstream ss(s);
    string word;
    ss >> word;
    cout << word;
    while(ss >> word){

        //reverse here
        reverse(word.begin(), word.end());

        cout << " " << word ;
    }
    return 0;
}