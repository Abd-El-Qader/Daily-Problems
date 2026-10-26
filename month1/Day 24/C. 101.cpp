/*بسم الله الرحمن الرحيم*/

/*
 * Problem: C. 101
 * URL: https://codeforces.com/contest/2259/problem/C
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
  bool flag = 1;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    cnt += arr[i] == 1;
    if (arr[i] == -1 && flag && !cnt) {
      arr[i] = 1;
      flag = 0;
    }
  }

  cnt = 0;
  for (int i = n - 1; i >= 0; i--) {
    cnt += arr[i] == 1;
    if (arr[i] == -1 && !cnt) {
      arr[i] = 1;
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] == -1) {
      arr[i] = 0;
    }
    cout << arr[i] << " \n"[i + 1 == n];
  }
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
