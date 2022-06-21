// https://atcoder.jp/contests/abc256/tasks/abc256_c
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
    int h1, h2, h3, w1, w2, w3, ans=0;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    for(int i=1; i<=30; i++){
        for(int j=1; j<=30; j++){
            for(int k=1; k<=30; k++){
                for(int l=1; l<=30; l++){
                    int a=i, b=j, d=k, e=l;
                    int c=h1-a-b, f=h2-d-e, g=w1-a-d, h=w2-b-e, i=w3-c-f;
                    if(c <= 0 || f <= 0 || g <= 0 || h <= 0 || i <= 0) continue;
                    if(a+b+c==h1 && d+e+f==h2 && g+h+i==h3 && a+d+g==w1 && b+e+h==w2 && c+f+i==w3){
                        ans++;
                        // cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << ans << endl;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}