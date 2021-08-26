#include <bits/stdc++.h>

using namespace std;

int T, n, a[100005];
long long sum, mx;

int main()
{
    freopen("shadow.in", "r", stdin);
    cin >> T;
    while(T--){
        mx = 0;
        sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(!i || a[i] > a[i - 1])
                sum += a[i];
            else
                mx = max(mx, sum), sum = a[i];
        }
        mx = max(mx, sum);
        cout << mx << '\n';
    }
    return 0;
}
