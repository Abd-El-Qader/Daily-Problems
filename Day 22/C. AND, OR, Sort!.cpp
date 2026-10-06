/*بسم الله الرحمن الرحيم*/

/*
 * Problem: C. AND, OR, Sort!
 * URL: https://codeforces.com/contest/2266/problem/C
 */

#include <bits/stdc++.h>
#include <cstdio>
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
  string s;
  cin >> s;

  int zr = count(all(s), '0');
  int n0 = 0;
  int n1 = 0;
  int ans = n;
  if (s[0] == '1') {
    cout << zr << endl;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      n0++;
    else
      n1++;
    ans = min(ans, n1 + zr - n0);
  }
  cout << ans << endl;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);
  while (t--) {
    solve();
  }
}
