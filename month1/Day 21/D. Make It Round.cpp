/*بسم الله الرحمن الرحيم*/

/*
 * Problem: D. Make It Round
 * URL: https://codeforces.com/contest/1759/problem/D
 */

#include <bits/stdc++.h>
#include <cstdlib>
#include <map>
#include <utility>
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

map<int, int> factorization(int n) {
  map<int, int> tmp;
  int x = n;
  while (x & 1 ^ 1) { // n&1^1 -> n%2==0
    tmp[2]++;
    x /= 2;
  }

  for (int i = 3; i * i <= x; i += 2) {
    while (x % i == 0) {
      tmp[i]++;
      x /= i;
    }
  }

  if (x > 2) {
    tmp[x]++;
  }
  return tmp;
}
void solve() {
  ll n, m;
  cin >> n >> m;
  map<int, int> fact = factorization(n);
  ll k = 1LL;
  while (true) {
    if (fact[2] < fact[5]) {
      if (2 * k <= m) {
        k *= 2;
        fact[2]++;
      } else {
        break;
      }
    } else if (fact[2] > fact[5]) {
      if (5 * k <= m) {
        k *= 5;
        fact[5]++;
      } else {
        break;
      }
    } else {
      if (10 * k <= m) {
        k *= 10;
      } else {
        break;
      }
    }
  }
  cout << m / k * k * n << endl;
}

signed main() {
  Abd_ElQader_

      int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
