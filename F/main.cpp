#include <bits/stdc++.h>

using namespace std;

int T, n, m, t;
priority_queue<int> q;
long long sum;

int main()
{
    freopen("discount.in", "r", stdin);
    cin >> T;
    while(T--){
        sum = 0;
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            cin >> t;
            q.push(t);
        }
        while(m && !q.empty()){
            t = q.top();
            q.pop();
            t /= 2;
            m--;
            if(t)
                q.push(t);
        }
        while(!q.empty()){
            sum += q.top();
            q.pop();
        }
        cout << sum << '\n';
    }
    return 0;
}
