/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: A. Nearly Lucky Number
 * URL: https://codeforces.com/problemset/problem/110/A
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

int lucky[] = {4, 7, 47, 44, 74, 77};
void solve() {
  ll n;
  cin >> n;
  int cnt = 0;
  while (n > 0) {
    cnt += n % 10 == 4 || n % 10 == 7;
    n /= 10;
  }
  for (auto e : lucky) {
    if (e == cnt) {
      cout << Y;
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
