/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Third Largest Number
 * URL: https://atcoder.jp/contests/abc476/tasks/abc476_c
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define dbg(v) cerr << "line:" << __LINE__ << " " << #v << " = " << v << endl;
#define vdbg(v)                                                                \
  cerr << #v << '\n';                                                          \
  for (int i = 0; i < v.size(); i++) {                                         \
    cerr << v[i] << " \n"[i == v.size() - 1];                                  \
  }
#define sdbg(s)                                                                \
  cerr << #s << "\n";                                                          \
  for (auto i : s) {                                                           \
    cerr << i << " ";                                                          \
  }                                                                            \
  cerr << "\n"
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
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  vdbg(arr) multiset<int, greater<>> st = {arr[0], arr[1], arr[2]};
  cout << *next(st.begin(), 2) << endl;
  for (int i = 3; i < n; i++) {
    st.emplace(arr[i]);
    cout << *next(st.begin(), 2) << endl;
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
