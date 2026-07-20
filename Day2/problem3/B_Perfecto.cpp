                                            /*﷽*/
#include "bits/stdc++.h"
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;
#define Abd_ElQader_ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define len(v) (int)v.size()
#define Ceil(a,b) ((ll)a+(ll)(b-1))/b
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    auto is_pf_sqr = [&](ll n){
        ll t = n*(n+1)/2;
        ll t2 = sqrt(t);

        if(t2*t2 == t) {
            return true;
        }
        return false;
    };

    if(is_pf_sqr(n)){
        cout << "-1\n";
        return;
    }
    pmr::vector<int>ans(n+1);
    iota(ans.begin(), ans.end(), 0);

    for (int i = 1; i <= n; i++) {
        if(is_pf_sqr(i)) {
            swap(ans[i],ans[i+1]);
        }
        cout << ans[i] << " \n"[i == n];
    }

}  

signed main() {
    Abd_ElQader_

    int t=1;
    cin>>t;
    while(t--) 
    solve();
}