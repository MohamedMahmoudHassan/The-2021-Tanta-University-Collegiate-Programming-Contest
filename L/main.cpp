#include <bits/stdc++.h>

using namespace std;

int T, n, a[100005];
bool ans;

bool can(int pass){
    vector<int> v;
    for(int i = 0; i < n; i++)
        if(i != pass)
            v.push_back(a[i]);
    for(int i = 1; i < v.size(); i++)
        if(v[i] <= v[i - 1])
            return false;
    return true;
}

int main()
{
    freopen("time.in", "r", stdin);
    cin >> T;
    while(T--){
        ans = 1;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 1; i < n; i++)
            if(a[i] <= a[i - 1]){
                ans = can(i) || can(i - 1);
                break;
            }
        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}
