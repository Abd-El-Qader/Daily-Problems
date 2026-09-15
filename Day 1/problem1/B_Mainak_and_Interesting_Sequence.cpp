                                      /*بسم الله الرحمن الرحيم*/       
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
    ll n, m;
    cin >> n >> m;

    if(n > m) {
        cout << "No\n";
        return;
    }

    if(n&1) {
        cout << "Yes\n";
        cout << 1 + (m-n) << " ";
        for (int i = 1; i < n; i++) {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    if(m&1) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    cout << 1+(m-n)/2 << " ";
    cout << 1+(m-n)/2 << " ";
    for (int i = 1; i+1 < n; i++) {
        cout << 1 << " ";
    }
    cout << endl;
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
