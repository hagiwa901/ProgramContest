// https://atcoder.jp/contests/abc251/tasks/abc251_c
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
    int n;
    cin >> n;
    pair<int, pair<string, bool>> s[n];
    map<string, bool> mp;
    REP(i, n){
        cin >> s[i].second.first >> s[i].first;
        s[i].second.second = false;
        if(mp[s[i].second.first] == false){
            mp[s[i].second.first] = true;
            s[i].second.second = true;
        }
    }
    int score = -1, pos=0;
    REP(i, n){
        // cout << s[i].second.second << " " << s[i].first << endl;
        if(s[i].second.second == true && score < s[i].first){
            score = s[i].first;
            pos = i+1;
            // cout << score << " " << pos << endl;
        }
    }
    cout << pos << endl;
}