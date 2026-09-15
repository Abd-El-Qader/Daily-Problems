                                      /*بسم الله الرحمن الرحيم*/       
#include <algorithm>
#include <functional>
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
    vector<vector<int>>tree(n+1);
    int a;

    for (int i = 2; i <= n; i++) {
        cin >> a;
        tree[a].emplace_back(i);
    }

    vector<int>depth(n+1);
    vector<int>max_Depth(n+1);

    function<void(int)>deeping = [&](int v){
        max_Depth[v] = depth[v];
        for (auto u : tree[v]) {
            depth[u] = depth[v] + 1;      
            deeping(u);
            max_Depth[v] = max(max_Depth[v],max_Depth[u]);
        }
    };

    deeping(1);
    int ans = 0;

    function<void(int)>dfs = [&](int v){
        vector<int>d;
        for (int nxt : tree[v]) {
            dfs(nxt);
            d.emplace_back(max_Depth[nxt]);
        }
        if(tree[v].size()>1) {
            sort(d.begin(), d.end());
            ans += d[len(d)-2]+1 - depth[v];
        }
        else {ans++;}
    };
    dfs(1);
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
