                                      /*بسم الله الرحمن الرحيم*/       
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define Abd_ElQader_ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define dbg(v) cerr << #v << " = " << v << endl;
#define vdbg(v)cerr << #v << ":\n";\
        for(int i = 0 ; i < len(v) ; i++) { cerr << v[i] << " \n" [i==len(v)-1]; }
#define len(v) (int)v.size()
#define Ceil(a,b) ((ll)a+(ll)(b-1))/b
typedef long long ll;

void file_name(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

void solve() {
    int n;
    cin >> n;
    vector<ll>v(n) ;
    vector<int>indx;
    vector<int>bs;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]<i+1) {
            indx.emplace_back(i+1);
            bs.emplace_back(v[i]);
        }
    }
    sort(bs.begin(), bs.end());
    ll ans = 0ll;
    for (int i = 0; i < len(indx); i++) {
        int ind = upper_bound(bs.begin(),bs.end(),indx[i]) - bs.begin();
        int val = len(indx)-ind;
        ans += val;
    }
    cout << ans << endl;
}  

signed main() {
    Abd_ElQader_

    #ifndef ONLINE_JUDGE
    file_name("test");
    #endif

    int t=1;
    cin>>t;
    while(t--) 
    solve();
}
