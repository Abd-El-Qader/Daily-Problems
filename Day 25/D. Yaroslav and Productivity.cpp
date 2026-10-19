/*بسم الله الرحمن الرحيم*/

/*
 * Problem: D. Yaroslav and Productivity
 * URL: https://codeforces.com/contest/2244/problem/D
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
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  vector<ll> b(m);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  sort(all(b));
  int ind = 0;
  ll sum = 0ll;
  ll ans = 0ll;
  int j = 0;

  for (int i = 0; i < m; i++) {
    ind = b[i];
    sum = 0ll;
    for (; j < ind; j++) {
      sum += a[j];
    }
    ans += abs(sum);
  }
  dbg(ans) cerr << "\n";
  for (; j < n; j++) {
    ans += a[j];
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
