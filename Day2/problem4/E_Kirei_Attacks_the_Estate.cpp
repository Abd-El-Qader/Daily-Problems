                                      /*بسم الله الرحمن الرحيم*/       
#include <algorithm>
#include <array>
#include <ctime>
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

void solve() {
    int n;
    cin >> n;

    vector<ll>a(n) ;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int>adj[n];
    int x,y;
    for (int i = 0; i+1 < n; i++) {
        cin >> x >> y;
        x--, y--;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }

    vector<ll>value(n);
    vector<array<ll, 2>>ans(n);

    function<void(int,int)>dfs = [&](int u,int p) {
        ans[u][1] = max<ll>(a[u],ans[p][0] + a[u]);
        ans[u][0] = max<ll>(-a[u],ans[p][1] - a[u]);

        for (auto v : adj[u]) {
            if(v == p) {
                continue;
            }

            dfs(v,u);
        }
    };
    
    ans[0][1] = a[0];
    ans[0][0] = -a[0];
    for (auto child : adj[0]) {
            dfs(child,0);
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i][1] << " \n"[i == n-1];
    }
    cerr << clock()/100.0 << " ms\n";
}  

signed main() {
    Abd_ElQader_

    int t=1;
    cin>>t;
    while(t--) 
    solve();
}
