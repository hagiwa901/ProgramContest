// https://atcoder.jp/contests/dp/tasks/dp_a
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
    int h[n+1], dp[n+1];
    FOR(i, 1, n+1) cin >> h[i];
    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);
    for(int i=3; i<=n; i++){
        if(dp[i-1] + abs(h[i] - h[i-1]) < dp[i-2] + abs(h[i] - h[i-2])) dp[i] = dp[i-1] + abs(h[i] - h[i-1]);
        else dp[i] = dp[i-2] + abs(h[i] - h[i-2]);
    }
    cout << dp[n] << endl;
}