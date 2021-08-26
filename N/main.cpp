#include <bits/stdc++.h>

using namespace std;

int T;
string s, t;
set<string> v;

void add(){
    if(t.empty())
        return;
    string x = "";
    bool z = 0;
    for(char i : t){
        if(i != '0')
            z = 1;
        if(z)
            x += i;
    }
    v.insert(x);
    t = "";
}

int main()
{
    freopen("keyboard.in", "r", stdin);
    cin >> T;
    while(T--){
        t = "";
        v.clear();
        cin >> s;
        for(char i : s){
            if(i >= '0' && i <= '9')
                t += i;
            else
                add();
        }
        add();
        cout << v.size() << '\n';
    }
    return 0;
}
