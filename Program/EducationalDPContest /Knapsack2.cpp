// https://atcoder.jp/contests/dp/tasks/dp_e
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
    ull w;
    cin >> n >> w;
    ull value[n+1]={0}, weight[n+1]={0};
    ull dp[n+1][100001];
    FOR(i, 1, n+1) cin >> weight[i] >> value[i];
    REP(i, n+1) REP(j, 100001) dp[i][j] = INF;
    dp[0][0] = 0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=100000; j++){
            if(value[i] <= j) dp[i][j] = min(dp[i-1][j-value[i]] + weight[i], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    int ans = 100000;
    while(dp[n][ans]>w) ans--;
    cout << ans << endl;
}