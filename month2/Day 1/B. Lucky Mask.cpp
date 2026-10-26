/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B. Lucky Mask
 * URL: https://codeforces.com/problemset/problem/146/B
 */

#include <bits/stdc++.h>
#include <deque>
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
#define rall(v) v.rbegin(), v.rend()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef __int128_t LL; // cin and cout can't deal with
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  int a, b;
  cin >> a >> b;
  auto check_mask = [&](int num) {
    int r;
    int Lucky = 0;
    int shift = 1;
    while (num > 0) {
      r = num % 10;
      num /= 10;
      if (r == 4 || r == 7) {
        Lucky += r * shift;
        shift *= 10;
      }
    }
    return Lucky;
  };
  for (int i = a + 1;; i++) {
    if (check_mask(i) == b) {
      cout << i << endl;
      break;
    }
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
