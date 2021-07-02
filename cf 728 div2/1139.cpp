#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 


using namespace std;
#define ll long long int
#define ci(a) ll a; cin>>a;
#define fo(i,a,b)  for(ll i=a;i<b;i++)
#define MOD 1000000007
#define printSet(ok) for(auto it:ok){cout<<it<<" ";}cout<<endl; 

#define call(type,var) type var; cin>>var; 
#define ci2(type,a,b)  type a,b; cin>>a>>b;
#define ci3(type,a,b,c)  type a,b,c; cin>>a>>b>>c;
#define pb1(arr,k)  arr.push_back(k);  
#define print(arr) fo(i,0,arr.size()){ cout<<arr[i]<<" ";}cout<<endl;
#define printmap(ok) for(auto it:ok)cout<<it.first<<" "<<it.second<<endl;
#define printArr(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" "; cout<<endl;
#define call(type,var) type var; cin>>var;
#define vect(type,arr,n) vector<type>arr; for(int i=0;i<n;i++){type j; cin>>j; arr.push_back(j);} 
#define setprecis(n) std::fixed<<std::setprecision(n)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define all(arr) arr.begin(),arr.end()
#define fi first
#define se second
#define vi vector<int>
#define vvi vector<vector<int>>
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define forr(i,a,b) for (int i = a; i <= b; i++)
#define pb push_back
#define mp make_pair
#define msll multiset<ll>
#define pll pair<ll,ll> 
#define sll set<ll>
#define vll vector<ll> 
#define vpll vector<pair<ll,ll>>
#define umap unordered_map<ll,ll>
#define msll multiset<ll>
#define pll pair<ll,ll> 
#define sll set<ll>
#define idk cout<<endl;
#define condition(ok)  if(ok){cout<<"YES"<<endl; } else cout<<"NO"<<endl;
#define debug(a) cout<<"element is "<<a<<endl;
#define debug2(a,b) cout<<"2 element is "<<a<<" "<<b<<endl;
#define debug3(a,b,c) cout<<"3 element is "<<a<<" "<<b<<" "<<c<<endl;
#define check(a) if(a==1)cout<<"h1 ";if(a==2) cout<<"h2 "; if(a==3)cout<<"h3 "; idk
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)
#define isRanged(i,n) if(i<0||i>=n)return false else return true;
#define isRanged2(i,j,n1,n2) if(i<0||i>=n1||j<0||j>=n2)return false; else return true;


#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; 
int mod(ll a, ll b) {
return ((a%b) + b) % b;
}




const int maxn=100009;
ll parent[maxn];

map<pair<int,int>,int>helper;
vector<int>graph[maxn];
ll sze[maxn];
bool visited [maxn];

long long int power(long long int x,long long int y, long long int p)
{
    ll res = 1;     
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res%p;
}


int find_set_size(int a )
{
  if(a!=parent[a])
  {
    return parent[a]=find_set_size(parent[a]);

  }
  else
  return a;

}
void union_sets_size (int a, int b) {
  a = find_set_size (a);
  b = find_set_size (b);
  if (a != b) {
    if (sze[a] < sze[b])
      swap (a, b);
    parent[b] = a;
    sze[a] += sze[b];
  }
}

void solve(){

  ci2(ll,n,k)

ll ans1=power(n,k,1000000007);

set<ll>helper2;

for(int i=1;i<=n;i++)
{
  sze[i]=1;
  parent[i]=i;


}

for(int i=0;i<n-1;i++)
{
  ci3(ll,a,b,c)

  helper[{a,b}]=c;
  helper[{b,a}]=c;

 
  graph[a].push_back(b);
  graph[b].push_back(a);
}
for(int i=1;i<=n;i++)
{

    for(auto it:graph[i])
    {   

      if(helper[{i,it}]==0)
      {
        auto it2=find_set_size(i);
        auto it3=find_set_size(it);

            //debug2(it2,it3)

        if(it2!=it3){
        union_sets_size(i,it);
      }
      }
    }
}

set<ll>helper3;

ll val=0;

for(int i=1;i<=n;i++)
{

  auto it=find_set_size(i);
  //debug(it)


  if(helper3.find(it)==helper3.end())
  {
    val+=power(sze[it],k,1000000007);
    val=val%MOD;
    helper3.insert(it);
  }
}

ans1=mod(ans1,MOD);
val=mod(val,MOD);
ll finalAns=ans1-val;

finalAns=mod(finalAns,MOD);
cout<<finalAns;

}

int main()
{
  fastio()
  int testCase=1;

//  ci(testCase)
  while(testCase--)
  {
    solve();

  }
}
