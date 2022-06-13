// https://atcoder.jp/contests/dp/tasks/dp_d
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
    int n, w;
    cin >> n >> w;
    int weight[n+1], v[n+1];
    ll dp[n+1][w+1];
    FOR(i, 1, n+1) cin >> weight[i] >> v[i];
    REP(i, n+1) REP(j, w+1) dp[i][j] = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=w; j++){
            if(weight[i] <= j) dp[i][j] = max(dp[i-1][j-weight[i]]+v[i], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
            // cout << i << " " << j << " " << dp[i][j] << endl;
        }
        // cout << endl;
    }
    cout << dp[n][w] << endl;
}