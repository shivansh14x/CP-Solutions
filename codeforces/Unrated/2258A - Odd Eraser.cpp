#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define MOD 1000000007
#define MOD1 998244353
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vc vector<char>
#define vpii vector<pair<int,int>>
#define vpivi vector<pair<int,vector<int>>>
#define pii pair<int,int>
#define si set<int>
#define msi multiset<int>
#define mii map<int,int>
#define mpiii map<pair<int,int>,int>
#define pqi priority_queue<int>
#define pqmi priority_queue<int, vector<int>, greater<int>>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define ff first
#define ss second
//PBDS--------------------------------------------------------------------------
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;

//template<typename T>
//using ordered_set = tree<
//    T,
//    null_type,
//    less<T>,
//    rb_tree_tag,
//    tree_order_statistics_node_update
//    >;
//---------------------------------------------------------------------------------------

// Custom Macros
#define f(i, n) for (int i = 0; i < n; i++)
#define fr(i, l, r) for (int i = l; i < r; i++)
#define iv(v, n)      \
    vector<int> v(n);  \
    f(i, n) cin >> v[i]
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

int expo(int a , int b , int mod){ int res = 1; while(b > 0){ if(b & 1){ res *= a; res %= mod;} a *= a; a %= mod; b >>= 1; } return res;}
int mminvprime(int a, int b) {return expo(a, b - 2, b);}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() {   
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    int gcd = __gcd(A[0] , A[n-1]);
    cout << gcd << nline;
}

int32_t main()
{
    /*Jai Shree Krishna*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        Solve();
    }

    return 0;
}