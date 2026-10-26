                                      /*بسم الله الرحمن الرحيم*/       
#include <iostream>
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
// if n <= 10^4 , time complexty can = O(n^2)
void solve() {
    string s; 
    cin >> s;
    int n = len(s);
    ll ans = 0ll;
    int l,r,cnt;
    for (int i = 0 ; i < 2; i++) {
        for (int j = 0; j < n; j++) {
             l = j-i, r = j; 
             cnt = 0;
            while(l >= 0 && r < n) {
                if(s[l]!=s[r]) {
                    cnt++;
                    if(cnt == 2) 
                        break;
                }
                ans++;
                l--,r++;
            }
        } 
    }
    cout << ans;
}  

signed main() {
    Abd_ElQader_

    #ifndef ONLINE_JUDGE
    file_name("test");
    #endif

    int t=1;
    // cin>>t;
    while(t--) 
    solve();
}
