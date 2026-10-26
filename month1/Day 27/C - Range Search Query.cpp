/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Range Search Query
 * URL: https://atcoder.jp/contests/abc477/tasks/abc477_c
 */

#include <bits/stdc++.h>
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
#define Y "Yes\n"
#define N "No\n"
typedef long long ll;
typedef __int128_t LL; // cin and cout can't deal with
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  int q;
  cin >> q;
  string s, t;
  cin >> s >> t;
  int n, m;
  n = len(s);
  m = len(t);
  deque<int> pfx(n);

  for (int l = 0; l < n - m + 1; l++) {
    bool mark = 1;
    for (int i = 0; i < m; i++) {
      if (s[l + i] != t[i]) {
        mark = 0;
        break;
      }
    }
    pfx[l] = mark;
  }

  for (int i = 0; i < n; i++) {
    if (i) {
      pfx[i] += pfx[i - 1];
    }
  }
  int a, b;
  while (q--) {
    cin >> a >> b;
    b--, a -= 2;
    bool ok = 0;
    b -= m - 1; // b-=m-1 -> b=b-(m-1)
    if (b < 0) {
      cout << N;
      continue;
    }
    if (a < 0) {
      ok = pfx[b];
    } else {
      ok = pfx[b] - pfx[a] > 0;
    }
    cout << (ok ? Y : N);
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
