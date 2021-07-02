
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
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))/*
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; 
int mod(ll a, ll b) {
return ((a%b) + b) % b;
}*/

ll tree1[4*(262144)];
ll arr[262144];
int n;

ll totalDepth;


void segmentBuild(int start,int end,int tree_start)
{
  if(start==end)
  {
    tree1[tree_start]=arr[start];
  
  }
  else
  {
    int mid=(start+end)/2;
    ll ok=log2(tree_start);
segmentBuild(start,mid,2*tree_start);
segmentBuild(mid+1,end,2*tree_start+1);


    if((totalDepth-ok)%2==0){


    tree1[tree_start]=tree1[2*tree_start+1]^tree1[2*tree_start];
  }
  else
  {
    tree1[tree_start]=tree1[2*tree_start+1]|tree1[2*tree_start];
  }
  }
}


void segmentUpdate(ll pos,ll newValue,ll start,ll end,ll tree_start)
{
  if(start==end)
  {
    //reached at pos assigning new values;
    //tree[tree_start]=operationwhile(newValue);
    arr[start]=newValue;
    //assign value which it must have after performing changes 
    tree1[tree_start]=newValue;
}
  else
  {
    int mid=(start+end)/2;

    if(mid<pos)
    {

      segmentUpdate(pos,newValue,mid+1,end,2*tree_start+1);
    }
    else
    {
      segmentUpdate(pos,newValue,start,mid,2*tree_start);
    }

       ll ok=log2(tree_start);
    if((totalDepth-ok)%2==0){
    tree1[tree_start]=tree1[2*tree_start+1]^tree1[2*tree_start];
  }
  else
  {

    tree1[tree_start]=tree1[2*tree_start+1]|tree1[2*tree_start];
  }
  }
}
void solve(){

  int k;
  cin>>n>>k;
n=pow(2,n);

  for(int i=0;i<n;i++)cin>>arr[i];
  totalDepth=log2(n);

segmentBuild(0,n-1,1);


for(int i=0;i<k;i++)
{
  ci2(ll,a,b)
  a--;

  segmentUpdate(a,b,0,n-1,1);
  
  cout<<tree1[1]<<endl;

}


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


