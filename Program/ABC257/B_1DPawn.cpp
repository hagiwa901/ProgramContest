// https://atcoder.jp/contests/abc257/tasks/abc257_b
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
    int n, k, q;
    cin >> n >> k >> q;
    int a[50000];
    REP(i, k) cin >> a[i+1];
    REP(i, q){
        int l;
        cin >> l;
        if(a[l] == n) continue;
        else if(a[l] + 1 == a[l+1]) continue;
        a[l]++;
    }
    REP(i, k) cout << a[i+1] << " ";
    cout << endl;
}