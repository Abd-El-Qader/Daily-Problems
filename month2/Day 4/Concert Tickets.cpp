/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: Concert Tickets
 * URL: https://cses.fi/problemset/task/1091
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
  int n, m;
  cin >> n >> m;
  vector<ll> h(n), t(m);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  for (int i = 0; i < m; i++)
    cin >> t[i];
  multiset<ll> st;
  st.insert(all(h));
  for (int i = 0; i < m; i++) {
    if (st.empty()) {
      cout << "-1\n";
      continue;
    }
    auto it = st.lower_bound(t[i]);
    if (it == st.end())
      it--;
    if ((it == st.begin() && *it > t[i])) {
      cout << "-1\n";
      continue;
    }
    if (*it > t[i]) {
      it--;
    }
    cout << *it << "\n";
    st.extract(it);
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
