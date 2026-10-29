/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B. Lucky Numbers (easy)
 * URL: https://codeforces.com/problemset/problem/96/B
 */

#include <bits/stdc++.h>
#include <climits>
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
#define rall(v) v.rbegin(), v.rend()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef __int128_t LL; // cin and cout can't deal with
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  ll ans = LONG_LONG_MAX;
  ll n;
  cin >> n;
  function<void(ll, int, int)> back = [&](ll current, int c_4, int c_7) {
    if (current >= n && c_4 == c_7)
      ans = min(ans, current);
    if (current / n >=
        (ll)10) // check if that diff of digit (current - n ) <= 0
      return;

    back(current * 10 + 4, c_4 + 1, c_7);
    back(current * 10 + 7, c_4, c_7 + 1);
  };
  back(0ll, 0, 0);
  cout << ans << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
