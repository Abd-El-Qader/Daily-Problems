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

void solve() {
    string a,b; 
    cin >> a >> b;
    if(len(a)<len(b)) {
        swap(a,b);
    }
    string sba ,sbb;
    for (int i = 0; i+1 < len(a); i++) {
        sba = a.substr(i,2);
        for (int j = 0; j+1 < len(b); j++) {
            sbb = b.substr(j,2);
            if(sbb == sba) {
                cout << "YES\n";
                if(j || i){cout << '*';}
                cout << sba;
                if(j+1 < len(b)-1 || i+1 < len(a)-1){cout << '*';}
                cout << endl;
                return;
            }
        }
    }
    if(a[0]==b[0]) {
        cout << "YES\n";
        cout <<  a[0] << '*' <<endl;
        return;
    }
    if(a.back()==b.back()) {
        cout<< "YES\n";
        cout << '*' << a.back() << endl;
        return;
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
