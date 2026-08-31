                                      /*بسم الله الرحمن الرحيم*/       
#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define Abd_ElQader_ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define dbg(v) cerr << #v << " = " << v << endl;
#define vdbg(v)cerr << #v << ":\n";\
        for(int i = 0 ; i < len(v) ; i++) { cerr << v[i] << " \n" [i==len(v)-1]; }
#define len(v) (int)v.size()
#define Ceil(a,b) ((ll)a+(ll)(b-1))/b
typedef long long ll;
typedef long double ld;
void file_name(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

void solve() {
    int n;
    cin >> n;
    string S;
    cin >> S;

    vector<ll>s(n+1);
    for (int i = 1; i <= n; i++) {
        s[i] = 1LL *(S[i-1] - '0');
    }

    vector<ll>pfx(n+1,0ll);
    for (ll i = 1LL; i <= n; i++) {
        pfx[i] = pfx[i-1] + s[i]*i;
    }

    string result = "";
    ll carry = 0ll;
    for (int i = n; i >= 1; i--) {
        ll total = pfx[i] + carry;
        result += (char)('0'+(total%10));
        carry /=10;
    }

    while(carry > 0) {
        result += (char)('0'+(carry%10));
        carry /= 10;
    }
    reverse(result.begin(), result.end());
    cout << result;
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
