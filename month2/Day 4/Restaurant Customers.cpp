/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: Restaurant Customers
 * URL: https://cses.fi/problemset/task/1619
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

struct gap {
  ll a, b;
};
void solve() {
  int n;
  cin >> n;
  vector<int> custom;
  vector<gap> gaps(n);
  int a, b;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    gaps[i] = {a, b};
    custom.emplace_back(a);
    custom.emplace_back(b);
  }
  sort(all(custom));
  vector<int> line(len(custom) + 1);
  for (int i = 0; i < n; i++) {
    int ind1 = lower_bound(all(custom), gaps[i].a) - custom.begin();
    int ind2 = lower_bound(all(custom), gaps[i].b) - custom.begin();
    line[ind1] = 1;
    line[ind2] = -1;
  }
  int mx = line[0];
  for (int i = 1; i < len(custom); i++) {
    line[i] += line[i - 1];
    mx = max(mx, line[i]);
  }
  cout << mx << endl;
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
