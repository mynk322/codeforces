//CODE WRITTEN BY MAYANK PADIA
#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(ll i=a; i<b; i++)
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fj(a,b) for(ll j=a; j<b; j++)
#define fk(a,b) for(ll k=a; k<b; k++)
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
int const N = 2 * 1e5 + 2;
ll a[N], seg[4 * (1 << 17)], ht;
void build(ll low,ll high,ll pos,ll c)
{
	if(low==high)
	{
		seg[pos]=a[low];
		return;
	}
	ll mid=(low+high)/2;
	build(low,mid,2*pos+1,c+1);
	build(mid+1,high,2*pos+2,c+1);
	if((ht-c)%2==1)
		seg[pos]=seg[2*pos+1]|seg[2*pos+2];
	else
		seg[pos]=seg[2*pos+1]^seg[2*pos+2];
}
void update(ll upos,ll val ,ll low,ll high,ll pos,ll c)
{
	if(low == high) {
		seg[pos] = a[upos] = val;
		return;
	}
	int mid = (low + high ) / 2;
	if(upos <= mid)update(upos,val,low,mid,pos*2+1,c+1); else update(upos,val,mid+1,high,pos*2+2,c+1);
	if ((ht - c)%2==1)seg[pos] = seg[pos * 2+1] | seg[pos * 2 + 2]; else seg[pos] = seg[pos * 2+1] ^ seg[pos * 2 + 2]; 
}
int main(){    
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0); cin.tie(0);
	int n, m;
	cin>>n>>m;
	ht=n;
	n=(1<<n);
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		build(0,n-1,0,0);
	for (int i = 0; i < m; ++i)
	{
		ll pos,val;
		cin>>pos>>val;
		update(pos-1,val,0,n-1,0,0);
		cout<<seg[0]<<endl;
	}
	return 0;
}