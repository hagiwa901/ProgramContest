// https://atcoder.jp/contests/abc136/tasks/abc136_b
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
 
int dy[] = {0, 0, 1, -1, 0};
int dx[] = {1, -1, 0, 0, 0};
 
 
int main()
{
    int n, ans=0;
    cin >> n;
    FOR(i, 1, n+1){
        string s;
        s = to_string(i);
        if(s.length() % 2 != 0) ans++;
    }
    cout << ans << endl;
}