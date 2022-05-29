// https://atcoder.jp/contests/abc253/tasks/abc253_c
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
    int q;
    cin >> q;
    map<int, int> mp;
    set<int> s;
    REP(i, q){
        int o, x, c;
        cin >> o;
        if(o == 1){
            cin >> x;
            mp[x]++;
            s.insert(x);
        }else if(o == 2){
            cin >> x >> c;
            // cout << "x:" << x << "c:" << c << endl;
            if(mp[x] > c) mp[x] -= c;
            else mp[x] = 0;
            if(mp[x] == 0) s.erase(x);
        }else{
            auto be = s.begin();
            // cout << "be:" << *be << endl;
            auto en = s.rbegin();
            // cout << "en:" << *en << endl;
            cout << *en - *be << endl;
        }
    }
}