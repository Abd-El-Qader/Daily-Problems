                                      /*بسم الله الرحمن الرحيم*/       
#include <chrono>
#include <functional>
#include <iostream>
#include <set>
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
    vector<int>arr(n) ;
    multiset<ll,greater<ll>>st;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll ans = 0ll;
    for (int i = 0; i < n; i++) {
        if(arr[i]) {
            st.emplace(arr[i]);
            continue;
        }
        if(!st.empty()) {
            ans += *st.begin();
            st.erase(st.begin());
        }
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
