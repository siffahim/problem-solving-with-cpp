#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, x;
        cin >> s >> x;

        size_t i = 0;
        while(i < s.size()){
            size_t p = s.find(x, i);
            if (p == string::npos) {
                break;
            }
            s.replace(p, x.size(), "#");
            i++;
        }

        cout << s << endl;
    }
    return 0;
}