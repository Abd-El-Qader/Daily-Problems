/*بسم الله الرحمن الرحيم*/

/*
 * Problem: C. LR-remainders
 * URL: https://codeforces.com/contest/1932/problem/C
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
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  string s;
  cin >> s;
  int ans[n];
  int l = count(all(s), 'L');
  int r = l;
  int num = 1;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == 'L') {
      num = num * v[--l] % m;
    } else {
      num = num * v[r++] % m;
    }
    ans[i] = num;
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " \n"[i == n - 1];
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
