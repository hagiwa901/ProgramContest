// https://atcoder.jp/contests/abc273/tasks/abc273_b
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

int main()
{
    ll x, k;
    cin >> x >> k;
    REP(i, k){
        double d = pow(10, i+1);
        if(x % long(d) / long(pow(10, i)) > 4) x /= pow(10, i+1), x += 1;
        else x /= pow(10, i+1);
        // cout << i << " " << x << " " << x % long(d) / long(pow(10, i)) << endl;
        x *= pow(10, i+1);
    }
    cout << x << endl;
}
