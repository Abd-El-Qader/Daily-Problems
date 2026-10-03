/*بسم الله الرحمن الرحيم*/

/*
 * Problem: D. Ingenuity-2
 * URL: https://codeforces.com/contest/1974/problem/D
 */

#include <bits/stdc++.h>
#include <map>
#include <memory>
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
#define Y "YES\n"
#define N "NO\n"
typedef long long ll;
typedef int64_t LL;
typedef long double ld;
const int MOD = 1e9 + 7;

void file_name(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {
  int n;
  string s;
  cin >> n >> s;
  if (n <= 2) {
    if (n == 1) {
      return void(cout << "NO\n");
    }
    if (s[0] != s[1]) {
      return void(cout << "NO\n");
    }
    cout << "RH\n";
    return;
  }
  map<char, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    mp[s[i]].emplace_back(i);
  }

  int y = abs<int>(mp['S'].size() - mp['N'].size());
  if (y & 1) {
    return void(cout << "NO\n");
  }

  int x = abs<int>(mp['E'].size() - mp['W'].size());
  if (x & 1) {
    return void(cout << "NO\n");
  }

  char matter_x = mp['E'].size() > mp['W'].size() ? 'E' : 'W';
  char matter_y = mp['N'].size() > mp['S'].size() ? 'N' : 'S';
  int n_x = min(mp['E'].size(), mp['W'].size());
  int n_y = min(mp['N'].size(), mp['S'].size());

  vector<char> ans(n);
  int t = n_x;
  while (t > 1) {
    ans[mp['E'].back()] = 'H';
    ans[mp['W'].back()] = 'H';
    mp['E'].pop_back();
    mp['W'].pop_back();
    t--;
  }
  if (t) {
    ans[mp['E'].back()] = 'R';
    ans[mp['W'].back()] = 'R';
    mp['E'].pop_back();
    mp['W'].pop_back();
  }
  t = n_y;
  while (t > 1) {
    ans[mp['N'].back()] = 'R';
    ans[mp['S'].back()] = 'R';
    mp['N'].pop_back();
    mp['S'].pop_back();
    t--;
  }
  if (t) {
    ans[mp['N'].back()] = 'H';
    ans[mp['S'].back()] = 'H';
    mp['N'].pop_back();
    mp['S'].pop_back();
  }
  bool flag_x = 0;
  bool flag_y = 0;
  while (!mp[matter_x].empty()) {
    ans[mp[matter_x].back()] = flag_x ? 'R' : 'H';
    flag_x ^= 1;
    mp[matter_x].pop_back();
  }

  while (!mp[matter_y].empty()) {
    ans[mp[matter_y].back()] = flag_y ? 'R' : 'H';
    flag_y ^= 1;
    mp[matter_y].pop_back();
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i];
  }
  cout << "\n";
}

signed main() {
  Abd_ElQader_

      int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
