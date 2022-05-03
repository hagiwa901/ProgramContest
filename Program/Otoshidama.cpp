// https://atcoder.jp/contests/abc085/tasks/abc085_c
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
    int n, cnt=0, money[]={10000, 5000, 1000}, a=-1, b=-1, c=-1;
    ll y, ans;
    cin >> n >> y;
    
    for(int i=0; i<=n; ++i){
        for(int j=0; j+i<=n; ++j){
            int k = n - i - j;
            ans = money[0] * i + money[1] * j + money[2] * k;
            if(ans == y){
                a = i;
                b = j;
                c = k;
            }
        }
    }
    cout << a << " " << b << " " << c << endl;
}