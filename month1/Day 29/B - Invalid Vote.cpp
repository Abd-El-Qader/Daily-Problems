/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B - Invalid Vote
 * URL: https://atcoder.jp/contests/abc480/tasks/abc480_b
 */

#include <bits/stdc++.h>
#include <cstdio>
#include <set>
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
const int mx = 1e3 + 10;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<string> str(n);
  vector<string> T(m);
  for (int i = 0; i < n; i++) {
    cin >> str[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> T[i];
  }
  vector<int> ans(n);
  for (int j = 0; j < m; j++) {

    bool flag = 0;
    for (int i = 0; i < n; i++) {
      if (str[i] == T[j]) {
        ans[i]++;
        flag = 1;
        break;
      }
    }
    cerr << "good";
    if (flag) {
      continue;
    }

    stack<int> st;
    for (int i = 0; i < n; i++) {
      if (len(T[j]) != len(str[i])) {
        continue;
      }
      int cnt = 0;
      for (int k = 0; k < len(str[i]); k++) {
        cnt += str[i][k] != T[j][k];
      }
      if (cnt <= 1) {
        st.emplace(i);
      }
    }
    if (st.size() == 1) {
      ans[st.top()]++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " \n"[i == n - 1];
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
