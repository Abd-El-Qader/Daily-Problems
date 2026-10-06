/*بسم الله الرحمن الرحيم*/

/*
 * Problem: C. Little Alawn's Puzzle
 * URL: https://codeforces.com/contest/1534/problem/C
 */

#include <algorithm>
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
#define rall(v) v.rbegin(), v.rend()
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef int64_t LL;
typedef long double ld;
const int MOD = 1e9 + 7;
namespace math {
const int MOD = 1e9 + 7;

// Fast Power (a^x)
long long fpow(long long a, long long x) {
  long long ans = 1LL;
  while (x) {
    if (x & 1)
      ans *= a;
    a *= a;
    x >>= 1;
  }
  return ans;
}

// Fast Power with Modulo (a^x % mod)
long long fpowm(long long a, long long x, int mod = MOD) {
  long long ans = 1LL;
  a %= mod;
  while (x) {
    if (x & 1)
      ans = (ans * a) % mod;
    a = (a * a) % mod;
    x >>= 1;
  }
  return ans;
}

// Combinations nCr without overflow for small r
long long nCr(int n, int r) {
  if (r < 0 || r > n)
    return 0;
  if (r > n - r)
    r = n - r;
  long long ans = 1LL;
  for (int i = 1; i <= r; i++) {
    ans = ans * (n - r + i) / i;
  }
  return ans;
}

// Arithmetic Progression Sum over [l, r]
long long sum_permu(long long l, long long r) {
  return (r - l + 1) * (r + l) / 2;
}

class mint {
public:
  long long val = 0;
  mint(long long v = 0) {
    val = v % MOD;
    if (val < 0)
      val += MOD;
  }
  explicit operator int() const { return val; }
  mint operator+(const mint &v) const { return mint(val + v.val); }
  mint operator-(const mint &v) const { return mint(val - v.val); }
  mint operator*(const mint &v) const { return mint(val * v.val); }
  mint operator/(const mint &v) const {
    long long b = fpowm(v.val, MOD - 2, MOD);
    return mint(val * b);
  }
  mint &operator=(const mint &v) {
    val = v.val;
    return *this;
  }
  mint &operator+=(const mint &v) {
    val = (val + v.val) % MOD;
    return *this;
  }
  mint &operator-=(const mint &v) {
    val = (val - v.val + MOD) % MOD;
    return *this;
  }
  mint &operator*=(const mint &v) {
    val = (val * v.val) % MOD;
    if (val < 0)
      val += MOD;
    return *this;
  }
  mint &operator/=(const mint &v) {
    long long b = fpowm(v.val, MOD - 2, MOD);
    val = (val * b) % MOD;
    if (val < 0)
      val += MOD;
    return *this;
  }
  bool operator==(const mint &v) const { return val == v.val; }
};
} // namespace math
using namespace math;
void solve() {
  int n;
  scanf("%d", &n);
  vector<int> a(n + 1), b(n + 1), pos(n + 1);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
    pos[a[i]] = i;
  }

  for (int i = 1; i <= n; i++) {
    scanf("%d", &b[i]);
  }

  int ans = 0;
  vector<bool> vist(n + 1);
  for (int i = 1; i <= n; i++) {
    if (!vist[i]) {
      int cur = i;
      while (!vist[cur]) {
        vist[cur] = 1;
        cur = pos[b[cur]];
      }
      ans++;
    }
  }
  ans = fpowm(2, ans);
  cout << ans << endl;
}

signed main() {
  int t = 1;
  scanf(" %d", &t);

  while (t--) {
    solve();
  }
}
