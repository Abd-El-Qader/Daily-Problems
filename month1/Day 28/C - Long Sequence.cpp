/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Long Sequence
 * URL: https://atcoder.jp/contests/abc457/tasks/abc457_c
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
  ll n, k;
  cin >> n >> k;
  vector<ll> a[n];
  vector<ll> l(n);
  dbg(n) dbg(k) int t;
  for (int i = 0; i < n; i++) {
    cin >> l[i];
    dbg(l[i]) for (int j = 0; j < l[i]; j++) {
      cin >> t;
      cin >> a[i].emplace_back(t);
    }
  }
  vdbg(l) cerr << "good\n";
  vector<ll> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  vdbg(c) int ind = 0;

  while (ind < n && k > c[ind] * l[ind]) {
    k -= c[ind] * l[ind];
    ind++;
  }
  int ind2 = k % l[ind];
  cout << a[ind][ind2] << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
