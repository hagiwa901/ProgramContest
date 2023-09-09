// https://atcoder.jp/contests/abc319/tasks/abc319_a
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
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
    map<string, int> mp;
    mp["tourist"] = 3858;
    mp["ksun48"] =  3679;
    mp["Benq"] = 3658;
    mp["Um_nik"]= 3648;
    mp["apiad"]= 3638;
    mp["Stonefeang"]= 3630;
    mp["ecnerwala"]= 3613;
    mp["mnbvmar"]= 3555;
    mp["newbiedmy"]= 3516;
    mp["semiexp"]= 3481;
    string s;
    cin >> s;
    cout << mp[s] << endl;
}
