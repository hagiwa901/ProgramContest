// https://atcoder.jp/contests/abc269/tasks/abc269_b
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
    int a=-1, b=-1, c=-1, d=-1;
    FOR(i, 1, 11){
        string s;
        cin >> s;
        
        if(s.find('#') != -1){
            if(a == -1) a = i;
            b = i;
            c = s.find('#') + 1;
            d = s.rfind('#') + 1;
        }
    }
    cout << a << " " << b << endl << c << " " << d << endl;
}
