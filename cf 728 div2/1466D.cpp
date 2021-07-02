#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 


using namespace std;
#define ll long long int
#define ci(a) ll a; cin>>a;
#define fo(i,a,b)  for(ll i=a;i<b;i++)
#define MOD 998244353
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
int mod(int a, int b) {
return ((a%b) + b) % b;
}
const int maxn=100009;

ll arr[maxn];
ll degree[maxn];


vector<int>graph[maxn];
void init(int n)
{

for(int i=0;i<=n+4;i++)
{
  arr[i]=0;
degree[i]=0;

  graph[i].clear();


}

}


void solve(){
int n;
cin>>n;

//debug(n)
init(n);

vect(ll,arr,n)

for(int i=0;i<n-1;i++)
{
  ci2(ll,a,b)


  degree[a]++;
  degree[b]++;
}

ll ans=0;

vector<ll>container;

for(int i=0;i<n;i++)
{
//debug (degree[i+1])
  for(int j=1;j<degree[i+1];j++)
  {
    container.push_back(arr[i]);
  }
  ans+=arr[i];

}
sort(container.begin(),container.end());
reverse(all(container));

 
    
for(int i=0;i<n-2;i++)
{
  cout<<ans<<" ";
  ans+=container[i];

}

cout<<ans;

idk





}

int main()
{
  fastio()
  ci(testCase)
  while(testCase--)
  {
    solve();

  }
}