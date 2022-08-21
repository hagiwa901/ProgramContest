// https://atcoder.jp/contests/abc265/tasks/abc265_b
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
 
int dy[] = {-1, 0, -1, 0, 1, 1, 1, -1};
int dx[] = {-1, 1, 0, -1, 0, 1, -1, 1};

int main() {
    ll n, m, t;
    cin >> n >> m >> t;
    ll a[n-1];
    REP(i, n-1) cin >> a[i];
    map<ll, ll> mp;
    REP(i, m){
        ll x, y;
        cin >> x >> y;
        mp[x-2] = y;
    }
    REP(i, n-1){
        t -= a[i];
        if(t <= 0){
            cout << "No" << endl;
            return 0;
        }
        t += mp[i];
        // cout << t << endl;
    }
    cout << "Yes" << endl;
}
