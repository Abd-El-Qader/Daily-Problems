/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Between P and Q
 * URL: https://atcoder.jp/contests/abc468/tasks/abc468_c
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
  vector<int> p(n);
  vector<int> q(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }

  int ans = 0;
  function<void(int, vector<int>, set<int>)> permu = [&](int ind, vector<int> a,
                                                         set<int> st) {
    if (len(a) == n) {
      ans++;
      return;
    }
    if (!a.empty()) {
      if ((a.back() <= p[ind] || a.back() >= q[ind]))
        return;
    }
    for (int i = 1; i <= n; i++) {
      if (st.find(i) == st.end()) {
        a.emplace_back(i);
        st.emplace(i);
        permu(ind + 1, a, st);
        a.pop_back();
        st.extract(i);
      }
    }
  };

  vector<int> tmp;
  set<int> st;
  permu(-1, tmp, st);
  cout << ans << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
