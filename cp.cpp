#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define vi vector<ll>
#define ull unsigned long long
#define ll  long long
#define pb push_back
#define ff first
#define ss second
#define flase false
#define sz(x) ((int)x.size())
#define pll pair<ll,ll>
#define w(t) ll t;cin>>t;while(t--)
const ll mod=1e9+7;
ll inf = 1e18;
template <class T>
T gen()
{
T x;
cin >> x;
return x;
}
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}
template<class T> using pbds= tree<T, null_type, less<T>, rb_tree_tag,
tree_order_statistics_node_update>;


void solve(){
ll n;
cin>>n;
vi v(n);
generate(all(v),gen<ll>);

return;
}


int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--) solve();
return 0;
}