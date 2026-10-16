/*بسم الله الرحمن الرحيم*/

/*
 * Problem: C. Unrequited Love
 * URL: https://codeforces.com/contest/2275/problem/C
 */

#include <bits/stdc++.h>
#include <cstdio>
#include <map>
#include <sys/types.h>
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
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef int64_t LL;
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  vector<ll> val(n);
  for (int i = 0; i < n - 4; i++) {
    val[i] = arr[i] + arr[i + 2] - arr[i + 4];
  }
  map<int, int> mp;
  int cnt = 0;
  for (int i = 0; i + 4 < n; i++) {
    mp[val[i]]++;
    if (i > 1) {
      if (val[i] == val[i - 2]) {
        cnt++;
      }
    }
    if (i > 3) {
      if (val[i] == val[i - 4]) {
        cnt++;
      }
    }
  }
  ll sum = 0;
  ll v = 0;
  for (auto e : mp) {
    v = e.second;
    sum += v * (v - 1) / 2;
  }
  sum -= cnt;
  cout << sum << endl;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
