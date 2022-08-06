// https://atcoder.jp/contests/abc263/tasks/abc263_a
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
    vector<int> c(5);
    REP(i, 5) cin >> c[i];
    VSORT(c);
    // REP(i, 5) cout << c[i] << endl;
    if(c[0] == c[1] && c[2] == c[3] && c[2] == c[4] && c[3] == c[4]) cout << "Yes" << endl;
    else if(c[0] == c[1] && c[0] == c[2] && c[1] == c[2] && c[3] == c[4])  cout << "Yes" << endl;
    else cout << "No" << endl;
}