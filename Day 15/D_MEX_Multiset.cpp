                                            /*﷽*/
#include "bits/stdc++.h"
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

void solve() {
    int n;    
    cin >> n;
    vector<int>a(n);
    map<int, vector<int>>indx; // map<a[i],places of a[i]> 
    string s(n,'A');

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        indx[a[i]].emplace_back(i);
    }
    
    auto nxt = [&](char c) {
        if(c == 'C') {
            return 'A';
        }
        return char(c+1);
    };

    int mex = 0;
    while(indx[mex].size() >= 3)mex++;
    dbg(mex)
    for(auto[x,v]:indx) {
        char c = 'A';
        for(auto idx:v) {
            if(x > mex) {
                s[idx] = 'C';
            }
            else {
                dbg(c)
                s[idx] = c;
                c = nxt(c);
            }
        }
    }   

    map<char,map<int,int>>mp;//map<c,map<a[i],occurenc>>
    for (int i = 0; i < n; i++) {
        mp[s[i]][a[i]] = 1;
    }
    int maxi = 0, sum = 0;
    for(char c:{'A','B','C'}) {
        int mx = 0;
        while(mp[c][mx])mx++;
        maxi = max(maxi,mx);
        sum += mx;
    }
    cerr << "\n";
    if(sum < 2*maxi) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << s << "\n";
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