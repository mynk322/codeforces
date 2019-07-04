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
#define I insert
#define vll vector<ll>
#define vllp vector<pair<ll,ll> >
#define mp make_pair
ll gcd(ll a, ll b){    return b!=0 ? a : gcd(b, a % b);}
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
    ll v[2][4];
    for (int i = 0; i < 4; ++i)
    {
        v[0][i]=0;
        v[1][i]=0;
    }
    v[1][0]=1;
    v[1][1]=1;
    v[1][2]=1;
    v[1][3]=0;
    ll mu=9;
    ll di=power(3,MAX-2,MAX);
    for (int i = 2; i < n+1; ++i)
    {
        /* code */
        v[i%2][3]=v[(i-1)%2][0]+v[(i-1)%2][1]+v[(i-1)%2][2];
        v[i%2][0]=v[i%2][1]=v[i%2][2]=(((mu%MAX-v[i%2][3]%MAX+MAX)%MAX)*di)%MAX;
        mu*=3;
        mu%=MAX;
    }
    cout<<v[n%2][3]%MAX;
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}