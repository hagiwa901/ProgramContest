// https://atcoder.jp/contests/abc250/tasks/abc250_a
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
    int h, w, r, c, cnt=0;
    cin >> h >> w >> r >> c;
    REP(i, 4){
        int x = r + dx[i], y = c + dy[i];
        // cout << x << " " << y << endl;
        if(x >= 1 && x <= h){
            if(y >= 1 && y <= w){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}