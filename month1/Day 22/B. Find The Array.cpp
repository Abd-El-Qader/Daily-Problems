/*بسم الله الرحمن الرحيم*/

/*
 * Problem: B. Find The Array
 * URL: https://codeforces.com/contest/1463/problem/B
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define Abd_ElQader_                                                           \
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define dbg(v) cerr << "line:" << __LINE__ << " " << #v << " = " << v << endl;
#define vdbg(v)                                                                \
  fprintf(stderr, "#v\n");                                                     \
  for (int i = 0; i < v.size(); i++) {                                         \
    ;                                                                          \
  }
#define Ceil(a, b) ((ll)a + (ll)(b - 1)) / b
#define len(v) v.size()
#define all(v) v.begin(), v.end()
#define Y "YES\n"
#define N "NO\n"
typedef int64_t ll;
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  ll x = 0ll, y = 0ll;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i & 1 ^ 1)
      x += a[i];
    else
      y += a[i];
  }
  for (int i = 0; i < n; i++) {
    if (x >= y && i & 1)
      a[i] = 1;
    if (x < y && i & 1 ^ 1)
      a[i] = 1;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " \n"[i == n - 1];
  }
}

signed main() {
  Abd_ElQader_

      int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
