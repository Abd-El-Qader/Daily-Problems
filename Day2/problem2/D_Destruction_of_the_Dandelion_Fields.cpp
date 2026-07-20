                                      /*بسم الله الرحمن الرحيم*/       
#include <algorithm>
#include <iostream>
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
    vector<int>v(n);
    int odd_s=0,even_s=0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]&1){odd_s++;}
        else {even_s++;}
    }
    if(!odd_s) {
        cout << "0\n";
        return;
    }

    ans = accumulate(v.begin(), v.end(), 0ll);
    sort(v.begin(), v.end());
    odd_s = (odd_s)/2;
    for (int i = 0; i < n && odd_s; i++) {
        if(v[i]&1) {
            odd_s--;
            ans -= v[i];
        }
    }

    cout << ans << endl;
}  

signed main() {
    Abd_ElQader_

    int t=1;
    cin>>t;
    while(t--) 
    solve();
}
