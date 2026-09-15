                                      /*بسم الله الرحمن الرحيم*/       
#include <iostream>
#include <map>
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

struct dis_counter:public map<int, int> {
    void extract(int x){
        if(--map<int, int>::operator[](x) == 0) {
            map<int, int>::extract(x);
        }
    }
};

void solve() {
    int n,k,l,r;
    cin >> n >> k >> l >> r;

    vector<int>a(n); 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(r < k) {
        cout << "0\n";
        return;
    }
    
    dis_counter cnt1;
    dis_counter cnt2;
    int  j1 = 0, j2 = 0;
    ll ans = 0ll;

    for (int i =0; i < n; i++) {
        cnt1[a[i]]++;
        cnt2[a[i]]++;

        while(len(cnt1)>k) {
            cnt1.extract(a[j1++]);
        }

        while(len(cnt2)>=k) {
            cnt2.extract(a[j2++]);
        }
        // [j1,j2)
        // [c-r+1,c-l+1]
        ans +=  max(0, min(j2,i-l+2)-max(j1,i-r+1));
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