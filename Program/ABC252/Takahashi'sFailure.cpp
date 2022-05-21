// https://atcoder.jp/contests/abc252/tasks/abc252_b
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
    int n, k, ma=0;
    cin >> n >> k;
    map<int, int> mp;
    REP(i, n){
        int a;
        cin >> a;
        mp[i+1] = a;
        ma = max(ma, a);
    }
    REP(i, k){
        int b;
        cin >> b;
        if(mp[b] == ma){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}