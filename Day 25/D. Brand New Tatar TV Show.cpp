/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: D. Brand New Tatar TV Show
 * URL: https://codeforces.com/contest/2236/problem/D
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
const int mxn = 5e5 + 5;
int arr[mxn];

void solve() {
  int n, k;
  cin >> n >> k;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  sort(arr, arr + n);
  int j = 1;
  while (j < n && arr[j] - arr[j - 1] >= 0 && arr[j] - arr[j - 1] <= k) {
    j++;
  }
  if (j == 1) {
    cout << N;
    return;
  }
  j -= j == n;
  if (mp[arr[j]] > 1) {
    int val = mp[arr[j]];
    if (val & 1 ^ 1) {
      cout << Y;
      return;
    }
    cout << N;
    return;
  }
  cout << Y;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
