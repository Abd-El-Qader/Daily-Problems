/*بسم الله الرحمن الرحيم*/

/*
 * Problem: D. Precision Alignment
 * URL: https://codeforces.com/contest/2275/problem/D
 */

#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
#define dbg(v) cerr << "line:" << __LINE__ << " " << #v << " = " << v << endl;
#define vdbg(v)                                                                \
  cerr << #v << '\n';                                                          \
  for (int i = 0; i < v.size(); i++) {                                         \
    cerr << v[i] << " \n"[i == v.size() - 1];                                  \
  }
#define Ceil(a, b) ((ll)a + (ll)(b - 1)) / b
#define len(v) v.size()
#define all(v) v.begin(), v.end()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef int64_t LL;
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<array<int, 3>> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    arr[i].make_sum();
  }
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
