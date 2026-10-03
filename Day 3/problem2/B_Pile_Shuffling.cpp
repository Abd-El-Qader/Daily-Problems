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
#define int ll
typedef long long ll;

void file_name(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

void solve() {
    int n;
    cin >> n;
    vector<int[4]>v(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {

        cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
        if(v[i][0]>v[i][2]) {
            ans += v[i][0]-v[i][2];
        }

        if(v[i][1]>v[i][3]){
            ans += v[i][1]-v[i][3];
            ans += min({v[i][0],v[i][2]});
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
