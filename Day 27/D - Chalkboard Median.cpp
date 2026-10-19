/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: D - Chalkboard Median
 * URL: https://atcoder.jp/contests/abc458/tasks/abc458_d
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

void solve() {
  int x;
  cin >> x;
  int q;
  cin >> q;
  int a, b;
  multiset<int> syn{x};
  auto it = syn.begin();
  int step = 0;
  while (q--) {
    step = 0;
    cin >> a >> b;
    if (b < a) {
      swap(a, b);
    }
    if (*it < a && *it < b) {
      step = 1;
    } else if (*it > a && *it > b) {
      step = -1;
    }
    syn.emplace(a);
    syn.emplace(b);
    if (step == 1) {
      it++;
    } else if (step == -1) {
      it--;
    }
    cout << *it << endl;
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
