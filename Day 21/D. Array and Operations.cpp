/*بسم الله الرحمن الرحيم*/

/*
 * Problem: D. Array and Operations
 * URL: https://codeforces.com/contest/1618/problem/D
 */

#include <bits/stdc++.h>
#include <deque>
#include <numeric>
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
  deque<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(all(v));
  ll ans = 0LL;
  auto Erase = [&]() {
    int r = len(v) - 1;
    int l = r;

    if (v.back() == v.front()) {
      ans++;
      v.pop_back();
      v.pop_front();
      return;
    }

    while (l >= 0 && v[l] == v[r])
      l--;

    v.erase(v.begin() + l);
    v.pop_back();
  };

  while (k--) {
    Erase();
    vdbg(v)
  }
  cerr << "\n";

  ans += accumulate(all(v), 0ll);
  cout << ans << '\n';
}

signed main() {
  Abd_ElQader_

      int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
