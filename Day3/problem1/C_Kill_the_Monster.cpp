                                      /*بسم الله الرحمن الرحيم*/       
#include <iostream>
#include <utility>
using namespace std;
#define Abd_ElQader_ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define dbg(v) cerr << #v << " = " << v << endl;
#define vdbg(v)cerr << #v << ":\n";\
        for(int i = 0 ; i < len(v) ; i++) { cerr << v[i] << " \n" [i==len(v)-1]; }
#define len(v) (int)v.size()
#define Ceil(a,b) ((ll)a+(ll)(b-1))/b
#define h first
#define d second
typedef long long ll;

void file_name(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

void solve() {
    pair<ll, ll>ch;
    pair<ll, ll>mo;
    ll k;
    pair<ll,ll>up;
    cin >> ch.h >> ch.d;
    cin >> mo.h >> mo.d;
    cin >> k;
    cin >> up.d >> up.h;
    for (int i = 0; i <= k; i++) {
        ch.h += up.h*i;
        ch.d += up.d*(k-i);
        ll pow_c = Ceil(ch.h,mo.d);
        ll pow_m = Ceil(mo.h,ch.d);
        ch.h -= up.h*i;
        ch.d -= up.d*(k-i);

        if(pow_c >= pow_m) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
