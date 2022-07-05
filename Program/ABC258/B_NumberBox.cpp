// https://atcoder.jp/contests/abc258/tasks/abc258_b
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
  int n;
  cin>>n;
  ll ans=0;
  vector<vector<ll>> a(n,vector<ll>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      char c;
      cin>>c;
      a[i][j]=c-'0';
    }
  }
  vector<int> p={1,1,1,0,0,-1,-1,-1},q={1,0,-1,1,-1,1,0,-1};
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<8;k++){
        ll now=0;
        ll x=i,y=j;
        for(int l=0;l<n;l++){
          now*=10;
          now+=a[x][y];
          x+=p[k];
          y+=q[k];
          x%=n;
          x+=n;
          y%=n;
          y+=n;
          x%=n;
          y%=n;
        }
        ans=max(ans,now);
      }
    }
  }
  cout<<ans<<endl;
}