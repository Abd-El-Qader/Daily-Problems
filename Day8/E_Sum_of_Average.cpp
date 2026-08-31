                                      /*بسم الله الرحمن الرحيم*/       
#include <deque>
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

void file_name(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

ll fpowm(ll b, ll e, ll m) { ll r=1; while(e){ if(e&1) r=r*b%m; b=b*b%m; e>>=1; } return r; }

struct mint {
    static constexpr int MOD = 998244353;
    ll val = 0;
    mint(ll v = 0) : val(v % MOD) { if (val < 0) val += MOD; }
    explicit operator int() const noexcept { return val; }
    int operator()() const noexcept { return val; }

    mint operator-() const noexcept { return mint(MOD - val); }
    mint& operator+=(const mint& o) noexcept { val += o.val; if (val >= MOD) val -= MOD; return *this; }
    mint& operator-=(const mint& o) noexcept { val -= o.val; if (val < 0) val += MOD; return *this; }
    mint& operator*=(const mint& o) noexcept { val = val * o.val % MOD; return *this; }
    mint& operator/=(const mint& o) noexcept { ll inv = fpowm(o.val, MOD-2, MOD); val = val * inv % MOD; return *this; }

    friend mint operator+(mint a, const mint& b) { return a += b; }
    friend mint operator-(mint a, const mint& b) { return a -= b; }
    friend mint operator*(mint a, const mint& b) { return a *= b; }
    friend mint operator/(mint a, const mint& b) { return a /= b; }

    mint& operator++() noexcept { *this += 1; return *this; }
    mint operator++(int) noexcept { mint t = *this; ++*this; return t; }
    mint& operator--() noexcept { *this -= 1; return *this; }
    mint operator--(int) noexcept { mint t = *this; --*this; return t; }

    bool operator==(const mint& o) const noexcept { return val == o.val; }
    bool operator!=(const mint& o) const noexcept { return val != o.val; }
    friend std::ostream& operator<<(std::ostream& os, const mint& m) { return os << m.val; }
};

void solve() {
    int n;
    cin >> n;
    vector<mint>A(n);
    int a;
    
    for (int i =0; i < n; i++) {
        cin >> a;
        A[i] = a;
    }
    deque<mint>pfx(n);
    partial_sum(A.begin(), A.end(), pfx.begin());
    partial_sum(pfx.begin(), pfx.end(), pfx.begin());
    pfx.push_front(0ll);
    mint ans = 0ll;
    for (int i = 1; i <= n; i++) {
        ans += ((pfx[n]-pfx[i-1]) - pfx[n-i])/i;
    }
    cout << ans << endl;
}  

void solve2(){
    int n;
    cin >> n;
    vector<mint>A(n);
    int a;
    for (int i = 0 ; i < n; i++) {
        cin >> a;
        A[i] = a;
    }
    deque<mint>pfx(n);
    deque<mint>h(n);
    partial_sum(A.begin(), A.end(), pfx.begin());
    pfx.push_front(0ll);

    for (int i = 1; i <= n; i++) {
        h[i-1] = (1/i);
    }
    partial_sum(h.begin(), h.end(), h.begin());
    h.push_front(0);

    mint ans = 0ll;
    for (int i = 1; i <= n; i++) {
        ans += pfx[i]*(h[i] - h[n-i]);
    }

    cout << ans << endl;
}
signed main() {
    Abd_ElQader_

    #ifndef ONLINE_JUDGE
    file_name("test");
    #endif

    int t=1;
    // cin>>t;
    while(t--) 
    solve2();
}
