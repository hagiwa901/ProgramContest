// https://atcoder.jp/contests/abc250/tasks/abc250_b
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
    int n, a, b, cnt;
    cin >> n >> a >> b;
    int w = b * n, h = a * n;
    char white = '.', black = '#';
    string s1, s2;
    REP(i, b){
        s1 += white;
        s2 += black;
    }
    bool flag = false, flag2 = false;
    REP(i, n){
        REP(j, a){
            flag = flag2;
            REP(k, n){
                if(flag == false) cout << s1;
                else cout << s2;
                if(flag == false) flag = true;
                else flag = false;
            }
            cout << endl;
            flag = flag2;
        }
        // cout << flag2 << endl;
        if(flag2 == false) flag2 = true;
        else flag2 = false;
    }
}