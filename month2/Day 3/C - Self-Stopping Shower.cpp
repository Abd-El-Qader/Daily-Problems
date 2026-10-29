/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Self-Stopping Shower
 * URL: https://atcoder.jp/contests/abc480/tasks/abc480_c
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
#define rall(v) v.rbegin(), v.rend()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef __int128_t LL; // cin and cout can't deal with
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  ll n, k, t;
  cin >> n >> k >> t;
  int A[n];
  vector<ll> a;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    if (A[i] <= t) {
      a.emplace_back(A[i]);
    }
  }
  if (a.empty()) {
    int ans = Ceil(t, k);
    cout << ans << endl;
    return;
  }
  a.emplace_back(t);
  sort(all(a));
  ll ans = Ceil(a[0], k);
  int ind = n - 1;
  for (int i = 1; i < len(a); i++) {
    if (a[i] > a[i - 1] + k) {
      ll val = a[i] - a[i - 1] - k;
      ans += Ceil(val, k);
    }
  }
  cout << ans << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
