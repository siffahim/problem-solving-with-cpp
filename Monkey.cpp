#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[100001];
    while(cin.getline(s, 100001)){
        char letters[100001];
        int len = 0;

        for (int i = 0; s[i] != '\0'; i++){
            if(s[i] != ' '){
                letters[len] = s[i];
                len++;
            }
        }

        //terminate the loop
        letters[len] = '\0';

        sort(letters, letters + len);

        cout << letters << endl;
    }

    return 0;
}