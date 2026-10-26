/*بسم الله الرحمن الرحيم*/

/*
 * Problem: E2. Unforgivable Curse (hard version)
 * URL: https://codeforces.com/contest/1800/problem/E2
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define Abd_ElQader_                                                           \
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
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
  int n, k;
  cin >> n >> k;
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < n; i++) {
    if (i + k < n || i - k <= 0)
      if (s[i] != t[i]) {
        return void(cout << "NO\n");
      }
  }
  sort(all(s));
  sort(all(t));
  if (s != t) {
    return void(cout << "NO\n");
  }
  cout << "YES\n";
}

signed main() {
  Abd_ElQader_

      int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
