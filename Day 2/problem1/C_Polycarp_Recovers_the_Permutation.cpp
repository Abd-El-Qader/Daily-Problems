                                      /*بسم الله الرحمن الرحيم*/       
#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;
#define Abd_ElQader_ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define len(v) (int)v.size()
#define Ceil(a,b) ((ll)a+(ll)(b-1))/b
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    deque<int>v(n) ;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ind = max_element( v.begin(),v.end()) - v.begin();
    if(ind != 0 && ind != n-1) {
        cout << "-1\n";
        return;
    }

    deque<int>ans;
    ans.emplace_back(v[ind]);
    v.erase(v.begin()+ind);
    while(!v.empty()) {
        if(v.front()<v.back()) {
            ans.emplace_front(v.front());
            v.pop_front();
        }
        else {
            ans.emplace_back(v.back());
            v.pop_back();
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n-1];
    }
}  

signed main() {
    Abd_ElQader_

    int t=1;
    cin>>t;
    while(t--) 
    solve();
}
