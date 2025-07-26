#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
};

int main(){
    MyStack st1, st2;

    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        st1.push(x);
    }

    int m;
    cin >> m;
    int y;
    for (int i = 0; i < m; i++){
        cin >> y;
        st2.push(y);
    }

    int isEqual = true;
    if(n != m){
        isEqual = false;
        return 0;
    }

    while (!st1.empty() && !st2.empty())
    {
        if(st1.top() != st2.top()){
            isEqual = false;
            break;
        }
        st1.pop();
        st2.pop();
    }

    if(isEqual){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}