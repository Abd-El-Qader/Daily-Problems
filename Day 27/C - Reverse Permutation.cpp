/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Reverse Permutation
 * URL: https://atcoder.jp/contests/abc465/tasks/abc465_c
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
  string s;
  cin >> n >> s;
  vector<int> ans(n);
  bool revers = 0;
  int l = 0, r = n - 1;
  int tmp = n;
  for (int _ = n - 1; _ >= 0; _--) {
    if (s[_] == 'o') {
      revers ^= 1;
    }
    if (revers) {
      ans[l++] = tmp--;
    } else {
      ans[r--] = tmp--;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " \n"[i == n - 1];
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
