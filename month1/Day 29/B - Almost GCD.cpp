/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B - Almost GCD
 * URL: https://atcoder.jp/contests/abc182/tasks/abc182_b
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
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int, int> mp;
  auto factor = [&](int n) {
    int k;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        mp[i]++;
        k = n / i;
        if (k != i) {
          mp[k]++;
        }
      }
    }
  };

  for (int i = 0; i < n; i++) {
    factor(a[i]);
  }
  int cnt = 0;
  int ans = 0;
  for (auto i : mp) {
    if (i.second > cnt) {
      ans = i.first;
      cnt = i.second;
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
