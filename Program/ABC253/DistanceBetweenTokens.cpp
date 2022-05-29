// https://atcoder.jp/contests/abc253/tasks/abc253_b
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
    string s[h];
    pair<int, int> pos[2];
    REP(i, h) cin >> s[i];
    bool f = false;
    REP(i, h){
        REP(j, w){
            if(s[i][j] == 'o'){
                if(f == false){
                    pos[0].first = i;
                    pos[0].second = j;
                    f = true;
                }else{
                    pos[1].first = i;
                    pos[1].second = j;
                }
            }
        }
    }
    cout << abs(pos[0].first - pos[1].first) + abs(pos[0].second - pos[1].second) << endl;
}