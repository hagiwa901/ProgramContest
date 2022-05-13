// https://atcoder.jp/contests/abc032/tasks/abc032_c
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
    int n, length=0;
    ll k;
    cin >> n >> k;
    vector<ll> s(n);
    REP(i, n){
        cin >> s[i];
        if(s[i] == 0){
            cout << n << endl;
            return 0;
        }
    }
    int r=0;
    ll a = 1;
    REP(l, n){
        while(r < n && a * s[r] <= k){
            a *= s[r];
            r++;
        }
        length = max(length, r - l);
        if(l == r) r++;
        else a /= s[l];
    }
    cout << length << endl;
}