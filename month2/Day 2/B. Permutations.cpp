/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B. Permutations
 * URL: https://codeforces.com/problemset/problem/124/B
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
  int n, k;
  cin >> n >> k;
  dbg(k) vector<string> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  auto get_diff = [&](vector<string> grid) {
    string nmx = *max_element(all(grid));
    string nmn = *min_element(all(grid));
    int mx = stoi(nmx);
    int mn = stoi(nmn);
    return mx - mn;
  };

  int mn = INT_MAX;
  function<void(set<int> &, vector<int> &)> func = [&](set<int> &used,
                                                       vector<int> &v) {
    if (len(v) == k) {
      vdbg(v);
      vector<string> grid;
      for (int i = 0; i < n; i++) {
        string nw;
        for (auto e : v) {
          e--;
          nw.push_back(nums[i][e]);
        }
        grid.emplace_back(nw);
      }
      mn = min(mn, get_diff(grid));
      return;
    }

    for (int i = 1; i < k + 1; i++) {
      if (used.find(i) != used.end())
        continue;
      v.emplace_back(i);
      used.emplace(i);
      func(used, v);
      v.pop_back();
      used.extract(i);
    }
  };
  vector<int> tmp;
  set<int> st;
  func(st, tmp);
  cout << mn << "\n";
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
