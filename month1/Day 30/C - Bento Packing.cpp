/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Bento Packing
 * URL: https://atcoder.jp/contests/abc479/tasks/abc479_c
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
#define rall(v) v.rbegin(), v.rend()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef __int128_t LL; // cin and cout can't deal with
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  ll w;
  cin >> w;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  ll ans = 0ll;
  function<ll(ll, ll)> req = [&](ll ind, ll current_w) {
    if (ind == n) {
      return 0ll;
    }
    ll x = 0ll;
    if (current_w + b[ind] <= w) {
      x = req(ind + 1, current_w + b[ind]) + a[ind];
    }
    ll y = req(ind + 1, current_w);
    return max(x, y);
  };
  ans = req(0ll, 0ll);
  cout << ans << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
