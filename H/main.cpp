#include <bits/stdc++.h>

using namespace std;

int T, n, t;
long long ans;
vector<pair<int, int>> v;
set<int> s;

int main()
{
    freopen("area.in", "r", stdin);
    cin >> T;
    while(T--){
        v.clear();
        s.clear();
        ans = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> t;
            v.push_back({t, i});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            s.insert(v[i].second);
            t = *s.begin();
            ans = max(ans, 1ll * abs(v[i].second - t) * v[i].first);
            t = *s.rbegin();
            ans = max(ans, 1ll * abs(v[i].second - t) * v[i].first);
        }

        cout << ans << '\n';
    }
    return 0;
}
