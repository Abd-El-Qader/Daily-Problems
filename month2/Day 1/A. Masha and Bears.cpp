/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: A. Masha and Bears
 * URL: https://codeforces.com/problemset/problem/907/A
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
  int v[4];
  for (int i = 3; i >= 0; i--)
    cin >> v[i];
  if (v[0] > v[1] || 2 * v[0] < v[1]) {
    cout << "-1\n";
    return;
  }
  for (int i = 3; i > 0; i--)
    cout << v[i] << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
