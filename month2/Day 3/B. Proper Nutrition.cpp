/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B. Proper Nutrition
 * URL: https://codeforces.com/problemset/problem/898/B
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
  int n, a, b;
  cin >> n >> a >> b;
  for (int i = 0; i * a <= n; i++) {
    if ((n - i * a) % b == 0ll) {
      cout << Y;
      cout << i << " " << (n - i * a) / b;
      return;
    }
  }
  cout << N;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
