//CODE WRITTEN BY MAYANK PADIA
#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(ll i=a; i<b; i++)
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fj(a,b) for(ll j=a; j<b; j++)
#define fk(a,b) for(ll k=a; k<b; k++)
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
    string s;
    cin>>s;
    s+='.';
    vector<string> v;
    string s1="";
    for(ll i=0; i<s.length();i++)
    {
        if(s[i]=='.')
        {
            v.pb(s1);
            s1="";
        }
        else
        {
            s1+=s[i];
        }
    }
    if(v.size()<2)
    {
        cout<<"NO";
        return 0;
    }
    if(v[0].length()>8||v[0].length()<1||v[v.size()-1].length()>3||v[v.size()-1].length()<1)
    {
        cout<<"NO";
        return 0;
    }
    ll fla =0;
    for(ll i=1; i<v.size()-1;i+=1)
    {
    if(v[i].length()>11||v[i].length()<2)
    {
        fla=1;
        break;
    }
    }
    if(fla)
    cout<<"NO\n";
    else
    {
        ll co=0;
        ll le=0;
        cout<<"YES\n";
        if(v.size()>2)
        {
        if(v[1].length()>3)
        {cout<<v[0]<<"."<<v[1].substr(0,3)<<endl;co=3;}
        else
        {cout<<v[0]<<"."<<v[1].substr(0,1)<<endl;
        co=1;}
        for(ll i=1; i<v.size()-2;i++)
        {
        if(v[i+1].length()>3)
        {cout<<v[i].substr(co)<<"."<<v[i+1].substr(0,3)<<endl;co=3;}
        else
        {cout<<v[i].substr(co)<<"."<<v[i+1].substr(0,1)<<endl;
        co=1;}
        }
        if(v.size()>2)
        cout<<v[v.size()-2].substr(co)<<"."<<v[v.size()-1]<<endl;
        }
        else
        {
            cout<<v[0]<<"."<<v[1]<<endl;
        }
    }
    return 0;
}