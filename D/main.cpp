#include <bits/stdc++.h>

using namespace std;

int T, n;
string s;

int slv(bool v){
    vector<int> x;
    x.push_back(v != s[0] - '0');
    for(int i = 1; i < 2 * n; i++){
        v = !v;
        x.push_back(x.back() + (v != s[i] - '0'));
    }

    int ans = x[n - 1];
    for(int i = n; i < 2 * n; i++)
        ans = min(ans, x[i] - x[i - n]);
    return ans;
}

int main()
{
    freopen("binary.in", "r", stdin);
    cin >> T;
    while(T--){
        cin >> s;
        n = s.size();
        s = s + s;
        cout << min(slv(0), slv(1)) << '\n';
    }
    return 0;
}
