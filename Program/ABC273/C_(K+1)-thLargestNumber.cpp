// https://atcoder.jp/contests/abc273/tasks/abc273_c
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

vector<pair<ll , int>> RunLength(vector<ll> a, int n){
    vector< pair<ll, int> > v;
    int cnt=1;
    ll pre=a[0];
    for(int i=1; i<n; i++){
        if(pre != a[i]){
            v.push_back( {pre, cnt} );
            pre = a[i];
            cnt = 1;
            // cout << pre << endl;
        }
        else cnt++;
    }
    v.push_back( {pre, cnt} );
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    VSORT(a);
    vector<pair<ll, int>> ret = RunLength(a, n);
    for(int i=ret.size()-1; i>=0; i--){
        cout << ret[i].second << endl;
    }
    REP(i, n-ret.size()) cout << 0 << endl;
}
