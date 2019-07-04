/*CODE WRITTEN BY MAYANK PADIA*/
#include <bits/stdc++.h>
using namespace std;
#define fri(a,b) for(ll i=a; i<b; i++)
#define frrj(a,b) for(ll j=a; j>=b; j--)
#define frj(a,b) for(ll j=a; j<b; j++)
#define frk(a,b) for(ll k=a; k<b; k++)
#define frz(a,b) for(ll z=a; z<b; z++)
typedef long long ll;
typedef double ld;
#define pll pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define I insert
#define vll vector<ll>
#define vllp vector<pair<ll,ll> >
#define mp make_pair
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define MAX 1000000007
int main(){
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,t;
    cin>>n;
    string s;
    cin>>s;
    char cu=s[0];
    ll ans=1;
    ll fl=0;
    if(s[0]==s[1]&&s[0]=='0'||s[n-1]==s[n-2]&&s[n-1]=='0')
        fl=1;
    ll cur=0,ma=0;
    string s1;
    n=s.length();
    for (int i = 1; i < n; ++i)
    {
        /* code */
        if(s[i]=='0')
        {
            cur++;
            ma=max(cur,ma);
            if(ma>=3)
                fl=2;
        }
        else
            cur=0;
        if(cu!=s[i])
        {
            ans++;
            cu=s[i];
        }
        else
        {
            s1+=s[i];
        }
    }
    if(s1.length()==1)
        fl=1;
    if(s1.length()>=2)
        fl=2;
    ans+=fl;
    cout<<ans<<endl;

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}