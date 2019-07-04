//CODE WRITTEN BY MAYANK PADIA
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(0);
    ll t,n;
    cin>>n>>t;
    ll x=240-t;
    ll a[10];
    a[0]=5;
    a[1]=15;
    a[2]=30;
    a[3]=50;
    a[4]=75;
    a[5]=105;
    a[6]=140;
    a[7]=180;
    a[8]=225;
    a[9]=275;
    ll s=10;
    for(ll i=0; i<10;i++)
    {
        if(a[i]>x)
        {s=i;break;}
    }
    cout<<min(n,s);
    return 0;
}