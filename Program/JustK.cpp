// https://atcoder.jp/contests/abc249/tasks/abc249_c
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
    int n, k, ans=0;
    cin >> n >> k;
    string s[n];
    REP(i, n) cin >> s[i];
    map<char, int> mp;
    for (int i = 0; i < (1<<n); ++i) {
        int sm = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1<<j)) {
                REP(k, s[j].length()) mp[s[j][k]]++;
            }
        }
        for (auto iter = mp.begin(); iter != mp.end(); ++iter){
            if(iter->second == k) sm++;
            iter->second = 0;
        }
        ans = max(ans, sm);
    }
    cout << ans << endl;
}