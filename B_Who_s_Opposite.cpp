#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second

#ifdef LOCAL
    #define dbg(x) cerr << #x << " = " << x << endl
#else
    #define dbg(x)
#endif

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;

ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define INPUT_VEC(v, n) vi v(n); for (auto &x : v) cin >> x

int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;

        int n = abs(a - b) * 2;

        if(a > n || b > n || c > n){
            cout << -1 << endl;
        }
        else{
            cout << (n/2 + c - 1) % n + 1 << endl;
        }
       
    }

    return 0;
}
