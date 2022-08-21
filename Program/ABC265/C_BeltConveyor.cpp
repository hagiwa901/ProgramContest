// https://atcoder.jp/contests/abc265/tasks/abc265_c
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
    int h, w;
    cin >> h >> w;
    char g[h+1][w+1];
    FOR(i, 1, h+1) FOR(j, 1, w+1) cin >> g[i][j];
    int m[h+1][w+1];
    FOR(i, 1, h+1) FOR(j, 1, w+1) m[i][j] = 0;
    int i=1, j=1;
    while(1){
        if(m[i][j] == 1){
            cout << -1 << endl;
            return 0;
        }else{
            m[i][j] = 1;
            if(g[i][j] == 'U' && i != 1) i -= 1;
            else if(g[i][j] == 'D' && i != h) i += 1;
            else if(g[i][j] == 'L' && j != 1) j -= 1;
            else if(g[i][j] == 'R' && j != w) j += 1;
            else{
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}
