#include <bits/stdc++.h>

using namespace std;

int T, n, a[100005];
long long sum;

int main()
{
    freopen("offer.in", "r", stdin);
    cin >> T;
    while(T--){
        sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        n--;
        while(n >= 0){
            sum += a[n];
            n -= 2;
        }
        cout << sum << '\n';
    }
    return 0;
}
