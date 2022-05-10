// https://atcoder.jp/contests/typical90/tasks/typical90_d
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
    int h, w;
    cin >> h >> w;
    int a[w][h], x[w] = {0}, y[h] = {0};
    REP(i, h){
        REP(j, w){
            cin >> a[j][i];
            x[j] += a[j][i];
            // cout << x[j];
        }
    }
    REP(j, w){
        REP(i, h){
            y[i] += a[j][i];
            // cout << y[i];
        }
    }
    REP(i, h){
        REP(j, w){
            if(j != w-1) cout << x[j] + y[i] - a[j][i] << " ";
            else cout << x[j] + y[i] - a[j][i] << endl;
        }
    }
}