// https://atcoder.jp/contests/abc038/tasks/abc038_c
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
    ll cnt=0;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    int r=1;
    REP(l, n){
        while(r < n && (r <= l || a[r-1] < a[r])){
            r++;
        }
        // cout << l << " " << r << endl;
        cnt += r - l;
        if(l == r) r++;
    }
    cout << cnt << endl;
}