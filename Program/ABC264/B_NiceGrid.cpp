// https://atcoder.jp/contests/abc264/tasks/abc264_b
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
    int grid[16][16];
    for(int i=1; i<16; i++){
        for(int j=1; j<16; j++){
            grid[i][j] = 1;
        }
    }
    for(int i=2; i<15; i += 2){
        if(i<=8){
            for(int j=i; j<17-i; j++){
                grid[i][j] = 0;
                if(i == j) for(int k=j; k<17-i; k++) grid[k][j] = 0;
                else if(j == 17-i-1) for(int k=17-i-1; k>i; k--) grid[k][j] = 0;
            }
        }else{
            for(int j=17-i-1; j<i+1; j++){
                grid[i][j] = 0;
                if(i == j) for(int k=j; k<17-i; k++) grid[k][j] = 0;
                else if(j==17-i-1) for(int k=17-i; k<i; k++) grid[k][j] = 0;
            }
        }
    }
    int r, c;
    cin >> r >> c;
    if(grid[r][c] == 1) cout << "black" << endl;
    else cout << "white" << endl;
}