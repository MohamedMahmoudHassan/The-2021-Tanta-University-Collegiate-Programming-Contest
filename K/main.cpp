#include <bits/stdc++.h>

using namespace std;

int T, dp[2002][2002], n, m, ms;
string s, t;

int slv(int i = 0, int j = 0){
    if(i == n && j >= ms)
        return 1;
    if(i >= n || j >= m)
        return 0;
    int& ret = dp[i][j];
    if(~ret)
        return ret;
    if(s[i] == t[j])
        return ret = slv(i + 1, j + 1);
    if(t[j] != '?' && t[j] != '*')
        return false;
    ret = slv(i + 1, j + 1);
    if(t[j] == '*')
        ret |= slv(i + 1, j);
    return ret;
}

int main()
{
    freopen("hacker.in", "r", stdin);
    cin >> T;
    while(T--){
        cin >> s >> t;
        n = s.size();
        m = t.size();
        ms = m;
        while(ms && t[ms - 1] == '*')
            ms--;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                dp[i][j] = -1;
        cout << (slv() ? "YES" : "NO") << '\n';
    }
    return 0;
}
