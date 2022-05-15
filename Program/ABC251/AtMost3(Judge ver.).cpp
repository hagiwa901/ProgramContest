// https://atcoder.jp/contests/abc251/tasks/abc251_b
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
    int n, w, cnt=0;
    cin >> n >> w;
    vector<int> a(n);
    map<int, bool> mp;
    REP(i, n){
        cin >> a[i];
        if(a[i] <= w && mp[a[i]] == false){
            cnt++;
            mp[a[i]] = true;
        }
    }
    if(n == 1){
        cout << cnt << endl;
        return 0;
    }
    REP(i, n){
        for(int j=i+1; j<n; j++){
            int s = a[i] + a[j];
            if(s <= w && mp[s] == false){
                cnt++;
                mp[s] = true;
            }
        }
    }
    if(n == 2){
        cout << cnt << endl;
        return 0;
    }
    REP(i, n){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int s = a[i] + a[j] + a[k];
                if(s <= w && mp[s] == false){
                    cnt++;
                    mp[s] = true;
                }
            }
        }
    }
    cout << cnt << endl;
}