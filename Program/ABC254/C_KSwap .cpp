// https://atcoder.jp/contests/abc254/tasks/abc254_c
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
    
	int N,K;
	cin>>N>>K;
	
	vector<vector<int>> b(K);
	
	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin>>a[i];
		b[i%K].push_back(a[i]);
        cout << i << " " << *b[i%K].rbegin() << endl;
	}
	
	for(int i=0;i<K;i++){
		sort(b[i].rbegin(),b[i].rend());
	}
	
	sort(a.begin(),a.end());
	
	vector<int> na;
	for(int i=0;i<N;i++){
		na.push_back(b[i%K].back());
		b[i%K].pop_back();
        cout << i << " " << na[i] << " " << a[i] << endl;
	}
	
	if(a==na)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
    return 0;
}