/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: D. Retaliation
 * URL: https://codeforces.com/contest/2117/problem/D
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
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  ll diff = arr[1] - arr[0];

  for (int i = 2; i < n; i++) {
    if (diff != arr[i] - arr[i - 1]) {
      cout << N;
      return;
    }
  }
  bool ok1 = n * diff <= arr[n - 1];
  bool ok2 = (arr[n - 1] - n * diff) % (n + 1) == 0;
  bool ok3 = (arr[0] - diff) / (n + 1) * n <= arr[0];
  if (ok1 && ok2 && ok3) {
    cout << Y;
    return;
  }
  cout << N;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
