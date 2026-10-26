/*بسم الله الرحمن الرحيم*/

/*
 * Problem: D. GCD-sequence
 * URL: https://codeforces.com/contest/1980/problem/D
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define Abd_ElQader_                                                           \
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define dbg(v) cerr << "line:" << __LINE__ << " " << #v << " = " << v << endl;
#define vdbg(v)                                                                \
  cerr << #v << '\n';                                                          \
  for (int i = 0; i < v.size(); i++) {                                         \
    cerr << v[i] << " \n"[i == v.size() - 1];                                  \
  }
#define Ceil(a, b) ((ll)a + (ll)(b - 1)) / b
#define len(v) v.size()
#define all(v) v.begin(), v.end()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef int64_t LL;
typedef long double ld;
const int MOD = 1e9 + 7;

// way 1
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<int> GCD(n - 1);
  for (int i = 0; i < n - 1; i++) {
    GCD[i] = gcd(v[i], v[i + 1]);
  }

  auto check = [=](int ix) { // O(nlogn)
    vector<int> tmp;
    for (int i = 0; i < ix; i++) {
      tmp.emplace_back(v[i]);
    }
    for (int i = ix + 1; i < n; i++) {
      tmp.emplace_back(v[i]);
    }
    vector<int> g;
    for (int i = 0; i < n - 2; i++) {
      g.emplace_back(gcd(tmp[i], tmp[i + 1]));
    }
    return is_sorted(all(g));
  };

  int idx = -1;
  for (int i = 0; i < n - 2; i++) {
    if (GCD[i] > GCD[i + 1]) {
      idx = i;
      break;
    }
  }
  bool ok = 0;
  ok |= idx == -1;
  for (int i = 0; i < 6; i++) {
    ok |= check(min(n - 1, idx + i));
    ok |= check(max(0, idx - i));
  }
  cout << (ok ? "YES\n" : "NO\n");
}

signed main() {
  Abd_ElQader_

      int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
