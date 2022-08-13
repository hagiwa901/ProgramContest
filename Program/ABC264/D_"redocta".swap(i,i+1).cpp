// https://atcoder.jp/contests/abc264/tasks/abc264_d
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
    map<char, int> mp;
    mp['a'] = 1;
    mp['t'] = 2;
    mp['c'] = 3;
    mp['o'] = 4;
    mp['d'] = 5;
    mp['e'] = 6;
    mp['r'] = 7;
    char c[7];
    REP(i, 7) cin >> c[i];
    int order[7], cnt=0;
    REP(i, 7) order[i] = mp[c[i]];
    for(int i=0; i<6; i++){
        for(int j=i+1; j<7; j++){
            if(order[i] > order[j]){
                swap(order[i], order[j]);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}