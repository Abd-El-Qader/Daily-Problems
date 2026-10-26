/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B. Friends
 * URL: https://codeforces.com/problemset/problem/94/B
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
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef __int128_t LL; // cin and cout can't deal with
typedef long double ld;
const int MOD = 1e9 + 7;

bool connect[5][5];
void solve() {

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      connect[i][j] = 0;
    }
  }

  int n;
  cin >> n;
  int a, b;

  auto catch_three = [&](bool flag) {
    bool f = flag;
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        if (j == i) {
          continue;
        }
        if (connect[i][j] == f) {
          for (int k = 0; k < 5; k++) {
            if (k == i || k == j) {
              continue;
            }
            if (connect[j][k] == f && connect[i][k] == f)
              return true;
          }
        }
      }
    }
    return false;
  };
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    connect[--a][--b] = 1;
    connect[b][a] = 1;
  }
  if (!catch_three(0) && !catch_three(1)) {
    cout << "FAIL\n";
    return;
  }
  cout << "WIN\n";
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
