// https://atcoder.jp/contests/dp/tasks/dp_h
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

int main() {
    int h, w;
    cin >> h >> w;
    char a[h+1][w+1];
    FOR(i, 1, h+1){
        FOR(j, 1, w+1) cin >> a[i][j];
    }
    ll dp[h+1][w+1];
    REP(i, w+1) dp[0][i] = 0;
    for(int i=1; i<=h; i++){
        dp[i][0] = 0;
        for(int j=1; j<=w; j++){
            if(i == 1 && j == 1) dp[i][j] = 1;
            else if(a[i][j] == '#') dp[i][j] = 0;
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000007;
            // cout << i << " " << j << " " << dp[i][j] << endl;
        }
    }
    cout << dp[h][w] << endl;
}