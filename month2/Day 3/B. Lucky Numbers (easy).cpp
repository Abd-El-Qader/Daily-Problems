/*بسم الله الرحمن الرحيم*/

/*
 * Editor: Abd_ElQader_
 * Problem: B. Lucky Numbers (easy)
 * URL: https://codeforces.com/problemset/problem/96/B
 */

#include <bits/stdc++.h>
#include <climits>
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
#define Y return void(cout << "YES\n");
#define N "NO\n"
typedef long long ll;
typedef __int128_t LL; // cin and cout can't deal with
typedef long double ld;
const int MOD = 1e9 + 7;

void solve() {
  ll n;
  cin >> n;

  vector<ll> valus;
  function<void(ll, int, int)> backtrack = [&](ll cur, int c_4, int c_7) {
    if (!c_4 && !c_7) {
      valus.emplace_back(cur);
      return;
    }
    if (c_7 && c_4) {
      backtrack(cur * 10ll + 4, c_4 - 1, c_7);
      backtrack(cur * 10ll + 7, c_4, c_7 - 1);
      return;
    }
    if (c_7) {
      backtrack(cur * 10ll + 7, c_4, c_7 - 1);
      return;
    }

    backtrack(cur * 10ll + 4, c_4 - 1, c_7);
  };

  for (int i = 1; i < 6; i++) {
    backtrack(0ll, i, i);
    sort(all(valus));
    int ind = lower_bound(all(valus), n) - valus.begin();
    if (ind == len(valus)) {
      valus.clear();
      continue;
    }
    cout << valus[ind];
    break;
  }
}

signed main() {
  int t = 1;

  while (t--) {
    solve();
  }
}
