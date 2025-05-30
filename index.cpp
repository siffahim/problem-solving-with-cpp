#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[100], letters[100];
    cin.getline(s, 100);
    int len = 0;

    for (int i = 0; s[i] != '\0'; i++){
        if(s[i] != ' '){
            letters[len] = s[i];
            len++;
        }
    }

    sort(letters, letters + len);

    cout << letters;

    return 0;
}