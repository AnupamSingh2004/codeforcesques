#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define F0R(i, a) for (int i = 0; i < (a); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define R0F(i, a) for (int i = (a)-1; i >= 0; --i)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = 3.14159265358979323846;

template <typename T>
void print(vector<T>& v) {
    for (auto& x : v) {
        cout << x << " ";
    }
    cout << '\n';
}

template <typename T>
void print(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << '\n'; 
}

void solve() {
   ll x,y;
   cin >> x  >> y;

   ll totalSum = x;

    for (int i = 0; i < y; ++i)
    {
        if (totalSum*2 <= totalSum + 1000)
        {
            totalSum += 1000;
        }else{
            totalSum = totalSum*2;
        }
    }
    cout<<totalSum<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
	freopen("./input.txt","r",stdin);
	freopen("./output.txt","w",stdout);
	#endif

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
