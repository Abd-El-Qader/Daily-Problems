/*بسم الله الرحمن الرحيم*/

/*
 * Problem: C. XOR and Triangle
 * URL: https://codeforces.com/contest/2074/problem/C
 */

#include <bits/stdc++.h>
using namespace std;
#define Abd_ElQader_                                                           \
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define dbg(v) cerr << "line:" << __LINE__ << " " << #v << " = " << v << endl;
#define vdbg(v)                                                                \
  cerr << #v << '\n';                                                          \
  for (int i = 0; i < v.size(); i++) {                                         \
    cerr << v[i] << " \n"[i == v.size() - 1];                                  \
  }
#define Ceil(a, b) ((ll)a + (ll)(b - 1)) / b
#define len(v) v.size()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef int64_t LL;
typedef long double ld;
const int MOD = 1e9 + 7;

void file_name(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {
  int a;
  cin >> a;

  auto check = [&](int a, int b, int c) {
    bool f1 = a + b > c;
    bool f2 = c + b > a;
    bool f3 = c + a > b;
    return f1 & f2 & f3;
  };
  ll num = 31 - __builtin_clz(a);
  num = (1 << (num + 1)) - 1;
  int b = a ^ num;
  int c = a ^ b;
  bool f = 0;
  int bt = 1;
  f = b ^ bt;
  while (b < a && !check(a, b, c)) {
    if (!f)
      do {
        bt <<= 1;
        f = b ^ bt;
      } while (!f);
    b |= bt;
    c = a ^ b;
    f = 0;
    if (check(a, b, c)) {
      break;
    }
  }
  if (a > b)
    return void(cout << b << "\n");
  cout << "-1\n";
}

signed main() {
  Abd_ElQader_

      int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
