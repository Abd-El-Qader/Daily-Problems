                                             /* ﷽ */
#include "bits/stdc++.h"
#include <functional>
#include <numeric>
#include <utility>
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
    int n , k;
    cin >> n >> k; 

    const int N = 2e5+20;
    vector<pair<int,int>>segments(n);
    vector<int>cnt(N);
    vector<vector<int>>points(N);
    for (int i = 0; i < n; i++) {
        cin >> segments[i].first >> segments[i].second;

        cnt[segments[i].first]++;        
        cnt[segments[i].second+1]--;        

        points[segments[i].first].emplace_back(i+1);
        points[segments[i].second+1].emplace_back(-i-1);
    }

     
     for (int i = 1; i < N; i++) {
        cnt[i] += cnt[i-1];
    }

    int cursub = 0;
    vector<int>sub(N);
    vector<int>ans(n);
    set<pair<int, int>,greater<>>cursegs;

    for (int i = 0; i < N; i++) {
        cursub -= sub[i];

        for (auto i : points[i]) {
            if(i > 0) {
                cursegs.emplace(segments[i-1].second,i-1);
            } 
            else {
                auto it = cursegs.find({segments[-i-1].second,-i-1});
                if(it != cursegs.end()) {
                    cursegs.extract(it);
                }
            }
        }

        while (cnt[i] - cursub > k) {
            int pos = cursegs.begin()->second;
            cursegs.extract(cursegs.begin());
            sub[segments[pos].second + 1]++;
            cursub++;
            ans[pos]=1;
        }
    }
    cout << accumulate(ans.begin(),ans.end(),0ll) << endl;
    for (int i = 0; i < n; i++) {
        if (ans[i]) {
            cout << i+1 << " \n"[i+1 == n];
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