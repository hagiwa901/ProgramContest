// https://atcoder.jp/contests/abc252/tasks/abc252_c
// https://atcoder.jp/contests/abc252/editorial/3997
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
	string s[100];
	int cnt[10][10];
	int ans, mx;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)cnt[i][j] = 0;
	}
	cin >> n;
	for (int i = 0; i < n; i++)cin >> s[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cnt[(s[i][j] - '0')][j]++;
            // cout << cnt[(s[i][j] - '0')][j] << " " << (s[i][j] - '0') << " " << j << endl;
		}
	}
	ans = 1000;
	for (int i = 0; i < 10; i++) {
		mx = 0;
		for (int j = 0; j < 10; j++) {
			mx = max(mx, 10 * (cnt[i][j] - 1) + j);
		}
		ans = min(ans, mx);
	}
	cout << ans << endl;
}