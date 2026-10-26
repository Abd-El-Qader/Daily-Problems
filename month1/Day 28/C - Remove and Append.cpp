/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: C - Remove and Append
 * URL: https://atcoder.jp/contests/abc474/tasks/abc474_c
 */

#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
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
  int q;
  cin >> n >> q;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  int a;
  stack<int> stc;
  set<int> st;
  int i = 0;
  while (q--) {
    cin >> a;
    stc.emplace(a);
    st.emplace(a);
  }
  for (int i = 0; i < n; i++) {
    if (st.find(p[i]) != st.end()) {
      continue;
    }
    cout << p[i] << " ";
  }
  int val = 0;
  st.clear();
  deque<int> other;
  while (!stc.empty()) {
    val = stc.top();
    stc.pop();
    if (st.find(val) != st.end()) {
      continue;
    }
    st.emplace(val);
    other.emplace_front(val);
  }
  for (auto i : other) {
    cout << i << " ";
  }
  cout << "\n";
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
