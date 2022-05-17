// https://atcoder.jp/contests/typical90/tasks/typical90_p
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
    ll n;
    cin >> n;
    vector<ll> c(3);
    REP(i, 3) cin >> c[i];
    ll coin = 9999;
    for(int i=0; i<9999; i++){
        for(int j=0; i+j<9999; j++){
            ll sm = c[0] * i + c[1] * j;
            if(sm > n) break;
            else if((n - sm) % c[2] == 0) coin = min(coin, i + j + (n - sm) / c[2]);
        }
    }
    cout << coin << endl;
}