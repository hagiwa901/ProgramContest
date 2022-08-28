// https://atcoder.jp/contests/abc266/tasks/abc266_c
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
    vector<pair<int, int>> angle(8);
    REP(i, 4){
        int x, y;
        cin >> x >> y;
        angle[i].first = x;
        angle[i].second = y;
        angle[i+4].first = x;
        angle[i+4].second = y;
    }
    long double angles = 0;
    bool f = true;
    REP(i, 4){
        int bax = angle[i].first - angle[i+1].first, bay = angle[i].second - angle[i+1].second;
        int bcx = angle[i+2].first - angle[i+1].first, bcy = angle[i+2].second - angle[i+1].second;
        // cout << bax << " " << bay << endl;
        // cout << bcx << " " << bcy << endl;
        // long double sita = (bax * bcx + bay * bcy) / (sqrt(pow(bax, 2) + pow(bay, 2)) * sqrt(pow(bcx, 2) + pow(bcy, 2)));
        // cout << acos(sita) * 180 / M_PI << endl;
        // angles += acos(sita) * 180 / M_PI;
        if(bax*bcy - bay*bcx > 0){
            f = false;
            exit;
        }
    }
    //if(angles >= 360.0) cout << "Yes" << endl;
    //else cout << "No" << endl;
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}
