// https://atcoder.jp/contests/abc259/tasks/abc259_c
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

vector<pair<char, int>> RunLength(string str){
    vector< pair<char, int> > v;
    int cnt=1;
    char pre=str[0];
    for(int i=1; i<str.size(); i++){
        if(pre != str[i]){
            v.push_back( {pre, cnt} );
            pre = str[i];
            cnt = 1;
        }
        else cnt++;
    }
    v.push_back( {pre, cnt} );
    return v;
}

int main() {
    string s, t;
    cin >> s >> t;
    vector<pair<char, int>> vs, vt;
    vs = RunLength(s);
    vt = RunLength(t);
    // cout << vs << " " << vt << endl;
    if(vs.size() != vt.size()){
        cout << "No" << endl;
        return 0; 
    }
    int n=vs.size();
    for(int i=0; i<n; i++){
        // cout << vs[i].second << " " << vt[i].second << endl;
        if(vs[i].first != vt[i].first){
            cout << "No" << endl;
            return 0;
        }
        else if(vt[i].second < vs[i].second){
            cout << "No" << endl;
            return 0;
        }
        else if(vt[i].second > 1 && vs[i].second == 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}