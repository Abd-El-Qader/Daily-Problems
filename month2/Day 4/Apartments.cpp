/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: Apartments
 * URL: https://cses.fi/problemset/task/1084
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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(all(a));
  sort(all(b));
  int j = 0;
  int cnt = 0;
  for (int i = 0; i < n && j < m; i++) {
    if (b[j] - k <= a[i] && a[i] <= b[j] + k)
      j++, cnt++;
    else if (a[i] > b[j] + k)
      j++, i--;
  }
  cout << cnt << endl;
}

void solve2() {
  int n, k, m;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(all(a));
  sort(all(b));
  int j = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    while (j < m && a[i] > b[j] + k)
      j++;
    if (b[j] - k <= a[i] && a[i] <= b[j] + k)
      j++, cnt++;
  }
  cout << cnt << endl;
}
signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
