#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define vllp vector< pll >
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define endl "\n"
#define test ll t;cin>>t;while(t--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second

#define forn(i,n) for(ll (i) = 0 ; (i) < (n) ; ++(i))
#define for1(i,n) for(ll (i) = 1 ; (i) <= (n) ; ++(i))
#define forr(i,n) for(ll (i) = (n)-1 ; (i)>=0 ; --(i))
#define forab(i,a,b,c) for(ll (i) = a ; (i) <= (b) ; (i)+=(c))
#define MAX 1000000007
using namespace std;

/*

    TREE:
        DFS,BFS....

void dfs (ll x)
{
    a[x]=1;
    for (int i = 0; i < v[x].size(); ++i)
    {
        if(a[v[x][i]]==0)
            dfs(v[x][i]);
    }
}
void bfs(int u) 
{ 
    queue<int> q; 
  
    q.push(u); 
    v[u] = true; 
  
    while (!q.empty()) { 
  
        int f = q.front(); 
        q.pop(); 
  
        cout << f << " "; 
  
        // Enqueue all adjacent of f and mark them visited  
        for (auto i = g[f].begin(); i != g[f].end(); i++) { 
            if (!v[*i]) { 
                q.push(*i); 
                v[*i] = true; 
            } 
        } 
    } 
} 

///////////////////////////////////////////////////////////////////////////////

                DSU   :-)
                
                
                
                    void initialize( ll Arr[ ], ll N)
        {
            for(ll i = 0;i<N;i++)
            {
        Arr[ i ] = i ;
        size[ i ] = 1;
        }
        }

        ll root (ll Arr[ ] ,ll i)
        {
            while(Arr[ i ] != i)
            {
                Arr[ i ] = Arr[ Arr[ i ] ] ; 
        i = Arr[ i ]; 
            }
        return i;
        }
        void weightedunion(ll Arr[ ],ll size[ ],ll A,ll B)
        {
            ll root_A = root(Arr,A);
            ll root_B = root(Arr,B);
            if(size[root_A] < size[root_B ])
            {
        Arr[ root_A ] = Arr[root_B];
        size[root_B] += size[root_A];
        }
            else
            {
        Arr[ root_B ] = Arr[root_A];
        size[root_A] += size[root_B];
        }

        }
        bool find(ll Arr[],ll A,ll B)
        {
            if( root(Arr,A)==root(Arr,B) )       //if A and B have the same root, it means that they are connected.
            return true;
            else
            return false;
        }


        
*/

/*

        SEGMENT TREE!!
        
        use MERGE function for any operation
        
        void build(ll low,ll high,ll pos)
{
    if(low==high)
    {
        seg[pos]=a[low];
        return;
    }
    ll mid=(low+high)/2;
    build(low,mid,2*pos+1);
    build(mid+1,high,2*pos+2);
        seg[pos]=min(seg[2*pos+1],seg[2*pos+2]);
}
void update(ll upos,ll val ,ll low,ll high,ll pos)
{
    if(low == high) {
        seg[pos] = a[upos] = val;
        return;
    }
    ll mid = (low + high ) / 2;
    if(upos <= mid)update(upos,val,low,mid,pos*2+1); else update(upos,val,mid+1,high,pos*2+2);
        seg[pos]=min(seg[2*pos+1],seg[2*pos+2]);
    }

ll query(ll pos, ll start, ll end, ll l, ll r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return MAX;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return seg[pos];
    }
    // range represented by a node is partially inside and partially outside the given range
    ll mid = (start + end) / 2;
    ll p1 = query(2*pos+1, start, mid, l, r);
    ll p2 = query(2*pos+2, mid+1, end, l, r);
    return min(p1 , p2);
}
//    LAZY
//  query(s,e,l,r,node)
//  {
//    

int main(){    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    ios::sync_with_stdio(0); cin.tie(0);
    ll n, m;
    cin>>n>>m;
    for (ll i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        build(0,n-1,0);
    for (ll i = 0; i < m; ++i)
    {
        ll pos,val;
        char c;
        cin>>c;
        cin>>pos>>val;
        if(c=='q')
            {ll ans=query(0,0,n-1,pos-1,val-1);
                cout<<ans<<endl;}
                else{
        update(pos-1,val,0,n-1,0);
    }
    }
    return 0;
}




*/


/*




            FENWICK TREE/ BIT

//        n --> No. of elements present in input array.  
//    BITree[0..n] --> Array that represents Binary Indexed Tree. 
//    arr[0..n-1] --> Input array for which prefix sum is evaluated.
  
// Returns sum of arr[0..index]. This function assumes 
// that the array is preprocessed and partial sums of 
// array elements are stored in BITree[]. 
int getSum(int BITree[], int index) 
{ 
    int sum = 0; // Iniialize result 
  
    // index in BITree[] is 1 more than the index in arr[] 
    index = index + 1; 
  
    // Traverse ancestors of BITree[index] 
    while (index>0) 
    { 
        // Add current element of BITree to sum 
        sum += BITree[index]; 
  
        // Move index to parent node in getSum View 
        index -= index & (-index); 
    } 
    return sum; 
} 
  
// Updates a node in Binary Index Tree (BITree) at given index 
// in BITree. The given value 'val' is added to BITree[i] and  
// all of its ancestors in tree. 
void updateBIT(int BITree[], int n, int index, int val) 
{ 
    // index in BITree[] is 1 more than the index in arr[] 
    index = index + 1; 
  
    // Traverse all ancestors and add 'val' 
    while (index <= n) 
    { 
    // Add 'val' to current node of BI Tree 
    BITree[index] += val; 
  
    // Update index to that of parent in update View 
    index += index & (-index); 
    } 
} 
  
// Constructs and returns a Binary Indexed Tree for given 
// array of size n. 
int *constructBITree(int arr[], int n) 
{ 
    // Create and initialize BITree[] as 0 
    int *BITree = new int[n+1]; 
    for (int i=1; i<=n; i++) 
        BITree[i] = 0; 
  
    // Store the actual values in BITree[] using update() 
    for (int i=0; i<n; i++) 
        updateBIT(BITree, n, i, arr[i]); 
  
    // Uncomment below lines to see contents of BITree[] 
    //for (int i=1; i<=n; i++) 
    //     cout << BITree[i] << " "; 
  
    return BITree; 
} 


*/




vll sieve;
void Sieve(int N){
    const ll maxn = N;
    sieve.resize(maxn);
    forn(i,maxn) sieve[i] = i;
    sieve[1] = -1;
    sieve[0] = -1;
    forab(i,2,maxn,1) if(i == sieve[i]) for(ll j = 2*i ; j < maxn ; j+=i) if(sieve[j] == j) sieve[j] = i;
}
ll extended_GCD(ll a , ll b , ll &x , ll &y){
    if(a == 0){
        x = 0;
        y = 1;
        return b;
    }
    ll x1 , y1;
    ll gcd = extended_GCD(b%a , a , x1 , y1);
    x = y1 - (b/a)*x1; 
    y = x1;
    return gcd;
}
ll power(ll a, ll b, ll m = MOD) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll modinv(ll a , ll mod = MOD){
    ll x , y;
    extended_GCD(a , mod , x , y);
    if(x < 0) x += mod;
    return x;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////


void solve(){
    ll n;
    ll x,y,z,x1,y1,z1;
    ll a[7];
    cin>>x1>>y1>>z1>>x>>y>>z;
    for (int i = 0; i < 6; ++i)
    {
        cin>>a[i+1];
    }
    ll ans=0;
    if(x1>x)
    {
        if(y1>y)
        {
            if(z1>z)
            {
                ans+=a[2]+a[4]+a[6];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[6]+a[2];
            }
            else
            {
                ans+=a[2]+a[6];
            }
        }
        else if(y1<0)
        {
            if(z1>z)
            {
                ans+=a[1]+a[4]+a[6];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[6]+a[1];
            }
            else
            {
                ans+=a[1]+a[6];
            } 
        }
        else
        {
            if(z1>z)
            {
                ans+=a[4]+a[6];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[6];
            }
            else
            {
                ans+=a[6];
            } 
        }
    }
    else if(x1<0){
    if(y1>y)
        {
            if(z1>z)
            {
                ans+=a[2]+a[4]+a[5];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[5]+a[2];
            }
            else
            {
                ans+=a[2]+a[5];
            }
        }
        else if(y1<0)
        {
            if(z1>z)
            {
                ans+=a[1]+a[4]+a[5];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[5]+a[1];
            }
            else
            {
                ans+=a[1]+a[5];
            } 
        }
        else
        {
            if(z1>z)
            {
                ans+=a[4]+a[5];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[5];
            }
            else
            {
                ans+=a[5];
            } 
        }
    }
    else {
    if(y1>y)
        {
            if(z1>z)
            {
                ans+=a[2]+a[4]+a[5];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[5]+a[2];
            }
            else
            {
                ans+=a[2]+a[5];
            }
        }
        else if(y1<0)
        {
            if(z1>z)
            {
                ans+=a[1]+a[4]+a[5];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[5]+a[1];
            }
            else
            {
                ans+=a[1]+a[5];
            } 
        }
        else
        {
            if(z1>z)
            {
                ans+=a[4]+a[5];
            }
            else if(z1<0)
            {
                ans+=a[3]+a[5];
            }
            else
            {
                ans+=a[5];
            } 
        }
        ans-=a[5];
    }
    cout<<ans;
    
    
    
    }
int main(){
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    ios::sync_with_stdio(0); cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }



    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}