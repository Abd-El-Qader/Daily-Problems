                                      /*بسم الله الرحمن الرحيم*/       
#include <functional>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
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

#define DEBUG
void solve() {
    int q, v;
    cin >> q >> v;
    priority_queue<ll>stc;
    ll t = 0,w;
    int c;
    while(q--) {
        cin >> c;
        switch (c) {
            case 1:
                cin >> t >> w;
                stc.emplace(w-t);
                break;

            default:
                cin >> t;
                if(len(stc) == 0) {
                    cout << "-1\n";
                    continue;
                }
                ll ans = min<ll>(v,stc.top()+t);
                cout << ans << endl;
                stc.pop();
        }
    }
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
