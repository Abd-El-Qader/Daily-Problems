/*﷽*/
#include<iostream>
#include <vector>
using namespace std;
#define Abd_ElQader_                                                           \
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define dbg(v) cerr << #v << " = " << v << endl;
#define vdbg(v)                                                                \
  cerr << #v << ":\n";                                                         \
  for (int i = 0; i < len(v); i++) {                                           \
    cerr << v[i] << " \n"[i == len(v) - 1];                                    \
  }
#define len(v) (int)v.size()
#define Ceil(a, b) ((ll)a + (ll)(b - 1)) / b
typedef long long ll;

void file_name(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {
  int n;
  cin >> n;
  vector<int> v(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  // think in it : the max bi1 + bi2 + bi3 - (r - l) is bi + bl + br - (r-l) = bi + (bl + l) + (br - r) the boundery of set from top three 
  vector<int> pref_max(n + 1);// you can find prefix max of bl+l
  vector<int> suff_max(n + 1);// you can find suffix max of br-r

  for (int i = 1; i <= n; i++) {
    pref_max[i] = max(pref_max[i - 1], v[i] + i);
  }

  suff_max[n] = v[n] - n;
  for (int i = n - 1; i >= 0; i--) {
    suff_max[i] = max(suff_max[i + 1], v[i] - i);
  }

  ll ans = 0ll;
  for (int i = 2; i < n; i++) {
    ans = max<ll>(pref_max[i - 1] + v[i] + suff_max[i + 1], ans);
  }
  cout << ans << endl;
}

signed main() {
  Abd_ElQader_

#ifndef ONLINE_JUDGE
    //   file_name("test");
#endif

  int t = 1;
  cin >> t;
  while (t--)
    solve();
}