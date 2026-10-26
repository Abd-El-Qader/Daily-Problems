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
  vector<array<ll, 3>> arr(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }

  auto check = [&](array<ll, 3> e) {
    return e[0] > e[1] || e[0] > e[2] || e[1] > e[2];
  };

  auto good = [&](ll x) {
    ll ans = 0ll;
    for (int i = 0; i < n; i++) {
      auto [a, b, c] = arr[i];
      if (a + b + c >= x)
        continue;

      if (check(arr[i])) {
        ans += x - (a + b + c);
      } else {
        // a <= b <= c;
        ll need = 1ll << 60;
        if (a != c)
          need = min(need, b - a + 1); // dec b until it = a+1
        if (a != b)
          need = min(need, c - b + 1); // dec c until it = b+1
        // if all equal then we can increase min sum than this this layot
        ans += 2ll * need + x -
               (a + b + c); // we mult need by 2 since sum of triple will
                            // decrease by need and we want to make sum reach to
                            // x so we add need again to be before satrt of
                            // decreasing then and diff between x and sum
      }
      if (ans > k) {
        return false;
      }
    }
    return true;
  };

  ll l = -(1ll << 60);
  ll r = 1ll << 60;
  ll mid = (r + l) / 2ll;
  while (l + 1 < r) {
    mid = l + r >> 1;
    if (good(mid))
      l = mid;
    else
      r = mid;
  }
  cout << l << endl;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
