// https://atcoder.jp/contests/dp/tasks/dp_c
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define FORR(i, m, n) for (int i = m; i >= n; i--)
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define ll long long
#define ull unsigned long long
#define pb(a) push_back(a)
#define INF 100000000001
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;
 
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};

int main()
{
    int n;
    cin >> n;
    ll dp[n+1][4], a[n+1], b[n+1], c[n+1];
    FOR(i, 1, n+1) cin >> a[i] >> b[i] >> c[i];
    FOR(i, 1, 4) dp[0][i] = 0;
    for(int i=1; i<=n; i++){
        dp[i][1] = max(dp[i-1][2] + b[i], dp[i-1][3] + c[i]);
        dp[i][2] = max(dp[i-1][1] + a[i], dp[i-1][3] + c[i]);
        dp[i][3] = max(dp[i-1][1] + a[i], dp[i-1][2] + b[i]);
        // cout << i << " " << dp[0][2] << " " << b[i] << endl;
    }
    cout << max(dp[n][1], max(dp[n][2], dp[n][3])) << endl;
}