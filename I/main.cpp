#include <bits/stdc++.h>

using namespace std;

int T, n, t, c[100005], d, ans;
string s;
vector<int> v;
priority_queue<pair<int, int>> q;

void add(int i){
    q.push({-c[i], i});
    while(q.top().second < i - d)
        q.pop();
    v.push_back(-q.top().first);
}

void clc(){
    if(v.empty())
        return ;
    int mx = v[0];
    for(int i : v){
        mx = max(mx, i);
        ans += i;
    }
    ans -= mx;
    v.clear();
}

void init(){
    ans = d = 0;
    while(!q.empty())
        q.pop();
}

int main()
{
    freopen("cost.in", "r", stdin);
    cin >> T;
    while(T--){
        init();
        cin >> n >> s;
        for(int i = 0; i < n; i++)
            cin >> c[i];
        for(int i = 0; i < n; i++){
            if(i && s[i] != s[i - 1])
                clc();
            else if(i)
                d++;
            add(i);
        }
        clc();
        cout << ans << '\n';
    }
    return 0;
}
