                                      /*بسم الله الرحمن الرحيم*/       
#include <iostream>
#include <map>
#include <string>
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
    string s;
    cin >> s;
    map<string, int>mp;
    string temp = "";
    for (int i = 0; i < n-1; i++) {

        if(s.substr(i,2) == temp) {
            temp = "";
            continue;
        }

        mp[s.substr(i,2)]++;
        temp = s.substr(i,2);
    }
    for (auto i : mp) {
        if(i.second > 1) {
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
