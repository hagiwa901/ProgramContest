// https://atcoder.jp/contests/abc256/tasks/abc256_b
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

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    int p=0, pos[100] = {0};
    REP(i, n){
        REPR(j, 3){
            if(pos[j] == 1 || j == 0){
                pos[j+a[i]] = 1;
                pos[j] = 0;
            }
            // cout << j << " " << pos[j] << endl;
        }
        FOR(j, 4, 100){
            if(pos[j] == 1) p++, pos[j]=0;
        }
    }
    cout << p << endl;
}