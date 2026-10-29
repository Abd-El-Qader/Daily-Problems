/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Bank Accounts
 * URL: https://atcoder.jp/contests/abc481/tasks/abc481_c
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
  int q;
  cin >> q;
  map<string, int> mp;
  string ss;
  int cnt = 1;
  while (q--) {
    cin >> ss;
    if (mp[ss] == 0) {
      mp[ss] = cnt++;
    }
    cout << mp[ss] << "\n";
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
