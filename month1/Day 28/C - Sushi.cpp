/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Sushi
 * URL: https://atcoder.jp/contests/abc460/tasks/abc460_c
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
  int m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(all(a));
  sort(rall(b));
  int pb = 0, pa = n - 1;
  int ans = 0;
  while (pb < m && pa >= 0) {
    if (a[pa] * 2 >= b[pb]) {
      pa--;
      ans++;
    }
    pb++;
  }
  cout << ans << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
