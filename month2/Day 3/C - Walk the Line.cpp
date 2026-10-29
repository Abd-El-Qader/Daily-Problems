/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Walk the Line
 * URL: https://atcoder.jp/contests/abc475/tasks/abc475_c
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
  ll n, s, l;
  cin >> n >> s >> l;
  vector<ll> a(n);
  for (int i = 1; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> leng(n + 1);
  ll sum = 0ll;
  for (int i = s + 1; i <= n; i++) {
    sum += a[i - 1];
    leng[i] = sum;
  }
  sum = 0ll;
  for (int i = s - 1; i > 0; i--) {
    sum += a[i];
    leng[i] = sum;
  }
  ll ans = 0ll;
  for (int i = s; i <= n; i++) {
    ll len1 = leng[i];
    ll len2;
    for (int j = s; j >= 1; j--) {
      len2 = leng[j];
      if (len2 + 2 * len1 <= l) {
        ans = max<ll>(ans, i - s + s - j + 1);
      }
      if (len2 * 2 + len1 <= l) {
        ans = max<ll>(ans, i - s + s - j + 1);
      }
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
