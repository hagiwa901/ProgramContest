// https://atcoder.jp/contests/typical90/tasks/typical90_g
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
    int n, q;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    VSORT(a);
    cin >> q;
    REP(i, q){
        ll b;
        cin >> b;
        auto iter = lower_bound(a.begin(), a.end(), b);
        unsigned int idx = distance(a.begin(), iter);
        if(idx == 0) cout << abs(a[idx] - b) << endl;
        else cout << min(abs(a[idx] - b), abs(a[idx-1] - b)) << endl; 
    }
}