#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
        int id;
        string name;
        char section;
        int total_mark;
};

int main(){
    int t;
    cin >> t;
    while(t--){
        Student a, b, c;

        cin >> a.id >> a.name >> a.section >> a.total_mark;
        cin >> b.id >> b.name >> b.section >> b.total_mark;
        cin >> c.id >> c.name >> c.section >> c.total_mark;

        if(a.total_mark >= b.total_mark && a.total_mark >= c.total_mark){
            cout << a.id << " " << a.name << " " << a.section << " " << a.total_mark << endl;
        }
        else if(b.total_mark >= a.total_mark && b.total_mark >= c.total_mark){
            cout << b.id << " " << b.name << " " << b.section << " " << b.total_mark << endl;
        }
        else{
            cout << c.id << " " << c.name << " " << c.section << " " << c.total_mark << endl;
        }
    }

    return 0;
}