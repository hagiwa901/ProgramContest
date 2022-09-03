// https://atcoder.jp/contests/abc267/tasks/abc267_b
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
    pair<int, bool> p[10];
    int pin[8] = {10, 1, 1, 2, 2, 2, 1, 1};
    p[0].first = 4;
    p[1].first = 3;
    p[2].first = 5;
    p[3].first = 2;
    p[4].first = 4;
    p[5].first = 6;
    p[6].first = 1;
    p[7].first = 3;
    p[8].first = 5;
    p[9].first = 7;
    REP(i, 10) p[i].second = true;
    REP(i, 10){
        char s;
        cin >> s;
        if(s == '0') pin[p[i].first]--, p[i].second = false;
    }
    int l=0, r=0;
    FOR(i, 1, 8){
        if(l == 0 && pin[i] > 0) l=i;
        else if(l != 0 && pin[i] > 0) r = i;
        // cout << l << " " << r << endl;
        if(r - l == 1){
            l = i;
        }else if(r -l > 1 && p[0].second == false){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
