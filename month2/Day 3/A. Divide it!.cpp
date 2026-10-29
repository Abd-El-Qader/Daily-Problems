/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: A. Divide it!
 * URL: https://codeforces.com/problemset/problem/1176/A
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
  ll n;
  cin >> n;
  int cnt = 0;
  while (n > 1) {
    if (n & 1 ^ 1)
      n /= 2, cnt++;
    else if (n % 3 == 0) {
      n *= 2;
      n /= 3;
      cnt++;
    } else if (n % 5 == 0) {
      n *= 4;
      n /= 5;
      cnt++;
    } else
      return void(cout << "-1\n");
  }
  cout << cnt << endl;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
