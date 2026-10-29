/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B. Perfect Number
 * URL: https://codeforces.com/problemset/problem/919/B
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
  int n;
  cin >> n;
  auto get_num10 = [&](int num) {
    ll sum = 0ll;
    while (num > 0) {
      sum += num % 10;
      num /= 10;
    }
    return sum == 10;
  };
  int cnt = 0;
  int num = 1;
  while (num++) {
    if (get_num10(num))
      cnt++;
    if (cnt == n)
      return void(cout << num);
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
