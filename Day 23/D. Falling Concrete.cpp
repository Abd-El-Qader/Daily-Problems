/*بسم الله الرحمن الرحيم*/

/*
 * Problem: D. Falling Concrete
 * URL: https://codeforces.com/contest/2266/problem/D
 */

#include <algorithm>
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
  int n;
  cin >> n;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] -= i;
  }
  sort(all(v));
  int ans = 1;
  int leng = 1;
  for (int i = 1; i < n; i++) {
    if (v[i] + 1 == v[i + 1]) {
      leng++;
    } else if (v[i] == v[i + 1])
      continue;
    else {
      ans = max(ans, leng);
      leng = 1;
    }
  }
  ans = max(ans, leng);
  cout << ans << endl;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
