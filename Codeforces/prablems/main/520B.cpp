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
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
ll n,m,ans;
int main()
{
    fast_io;
    cin>>n>>m;
    if(n>=m){
        return cout<<n-m<<endl ,0;
    }
    while(n!=m){
        if(n>m)m++;
        else{
            if(m%2==0)m/=2;
            else m++;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
