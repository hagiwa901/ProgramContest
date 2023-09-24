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

int main()
{
  int n, x, sum=0;
  cin >> n >> x;
  vector<int> a(n-1);
  vector<int> v(n);
  REP(i, n-1){
    cin >> a[i];
    sum += a[i];
  }
  if(sum < x){
    cout << -1 << endl;
    return 0;
  }
  VSORT(a);
  v[0] = a[0];
  FOR(i, 1, n) v[i] = v[i-1] + a[i];
  REP(i, n-1) cout << v[i] << " ";
  auto iter = lower_bound(v.begin(), v.end(), x);
  int idx = distance(v.begin(), iter);
  cout << idx << endl;
}