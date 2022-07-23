// https://atcoder.jp/contests/abc261/tasks/abc261_b
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
    int n;
    cin >> n;
    char a[n][n];
    REP(i, n) REP(j, n) cin >> a[i][j];
    string s = "incorrect";
    REP(i, n){
        REP(j, n){
            if(i == j) continue;
            if(a[i][j] == 'D' && a[j][i] == 'D') s = "correct";
            else if(a[i][j] == 'W' && a[j][i] == 'L') s = "correct";
            else if(a[i][j] == 'L' && a[j][i] == 'W') s = "correct";
            else s = "incorrect";
            if(s == "incorrect"){
                cout << s << endl;
                return 0;
            }
        }
    }
    cout << s << endl;
}