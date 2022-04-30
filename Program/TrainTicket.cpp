// https://atcoder.jp/contests/abc079/tasks/abc079_c
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
    string s, ans;
    cin >> s;

    int n = s.length();
    for (int bit = 0; bit < (1<<n); ++bit) {
        int sm = s[0] - '0';
        for (int i = 1; i < n; i++) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                // cout << "bit=" << bit << endl;
                // cout << a << endl;
                sm += s[i] - '0';
                // cout << "+" << s[i] << endl;
            }
            else{
                sm -= s[i] - '0';
                // cout << "-" << s[i] << endl;
            }
            // cout << "i=" << i << endl;
            // cout << num << " " << a << endl;
        }
        // cout << "sm=" << sm << endl;
        if(sm == 7){
            ans = s[0];
            for (int i = 1; i < n; i++) {
                if (bit & (1<<i)) { // 列挙に i が含まれるか
                    // cout << "bit=" << bit << endl;
                    // cout << a << endl;
                    ans += '+';
                }
                else ans += '-';
                ans += s[i];
            }
            cout << ans << "=7" << endl;
            return 0;
        }
    }
}