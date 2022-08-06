// https://atcoder.jp/contests/abc263/tasks/abc263_b
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

int a[50];

int anc(int cnt, int n){
    if(n == 1) return cnt+1;
    // cout << cnt << " " << n << endl;
    return anc(cnt+1, a[n-1]);
}

int main() {
    int n;
    cin >> n;
    for(int i=1; i<n; i++) cin >> a[i];
    cout << anc(0, a[n-1]) << endl;
}