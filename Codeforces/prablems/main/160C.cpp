#include <bits/stdc++.h>
using namespace std;

typedef long long                   ll;
typedef long double                 ld;
typedef pair<ll,ll>                 pll;
typedef pair<ld,ld>                 pld;


#define all(x)          (x).begin(),(x).end()
#define Sort(x)         sort(all(x))
#define sep             ' '
#define endl            '\n'
#define tab             '\t'
#define X               first
#define Y               second
#define SZ(x)           x.size()
#define kill(x)         return cout<<x<<endl,0;
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
ll n,k,a[MAXN];
int main()
{
    fast_io;
    cin>> n >> k;
    for(ll i=0;i<n;i++){
        cin>> a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++){
        ll t=1;
        while(a[i]==a[i+1])t++,i++;
        if(k-t*n>0)k-=t*n;
        else  return cout<<a[i]<<sep<<a[(k+t-1)/t-1]<<endl,0;
    }
    return 0;
}
