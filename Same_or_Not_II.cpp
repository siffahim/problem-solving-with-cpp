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

class MyQueue{
    public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_front();
        }

        int front(){
            return l.front();
        }

        int back(){
            return l.back();
        }

        int size(){
            return l.size();
        }

        bool empty(){
            return l.empty();
        }
};

int main(){
    MyStack st;
    MyQueue q;

    int n, m;
    cin >> n >> m;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        st.push(x);
    }

    int y;
    for (int i = 0; i < n; i++){
        cin >> y;
        q.push(y);
    }

    bool is_same = true;
    if(n != m){
        cout << "NO" << endl;
        return 0;
    }

    while(!st.empty() && !q.empty()){
        if(st.top() != q.front()){
            is_same = false;
            break;
        }
        st.pop();
        q.pop();
    }


    if(is_same){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}