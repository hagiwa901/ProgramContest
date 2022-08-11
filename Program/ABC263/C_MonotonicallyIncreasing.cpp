// https://atcoder.jp/contests/abc263/tasks/abc263_c
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
    int n,m;
    cin>>n>>m;
    vector<int> a;
    for(int i=0;i<n;i++) a.push_back(0);
    for(int i=0;i<m-n;i++) a.push_back(1);
    do{
        for(int i=0;i<m;i++){
            if(a[i]==0) cout<<i+1<<" ";
        }
        cout<<endl;
    }while(next_permutation(a.begin(),a.end()));
}