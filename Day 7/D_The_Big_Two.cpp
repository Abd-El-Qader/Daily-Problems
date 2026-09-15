                                      /*بسم الله الرحمن الرحيم*/       
#include <iostream>
#include <set>
#include <utility>
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
    int n, m;
    cin >> n >> m;
    int A[m],B[m];
    for (int i = 0; i < m; i++) {
        cin >> A[i] >> B[i];
    }

    set<pair<int,int>>valid_pair;
    auto check_pair = [&](int x){
        set<int>y;
        bool flag = 1;
        for (int i = 0; i < m; i++) {

            if(A[i] != x && B[i] != x) {
                if(y.empty()) {
                    if(flag) {
                        y.emplace(A[i]);
                        y.emplace(B[i]);
                        flag = 0;
                    }
                    else {
                        return;
                    }
                }
                
                else {
                    if(y.find(A[i])!=y.end()) {
                        y.clear();
                        y.emplace(A[i]);
                    }
                    else if(y.find(B[i])!=y.end()) {
                        y.clear();
                        y.emplace(B[i]);
                    }
                    else {
                        y.clear();
                    }
                }

            }
        }

        if(y.empty() && flag) {
            for (int i = 1; i < 1 + n; i++) {
                if(i != x) {
                    valid_pair.emplace(min(i,x),max(i,x));
                }
            }
            return;
        }
        
        for(auto i : y) {
            valid_pair.emplace(min(i,x),max(i,x));
        }
        return;
    };
    check_pair(A[0]);
    check_pair(B[0]);
    cout << len(valid_pair);
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
