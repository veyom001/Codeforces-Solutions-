#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci(a) ll a; cin>>a;
#define fo(i,a,b)  for(ll i=a;i<b;i++)
#define MOD 998244353

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
#define isRanged(i,n) if(i<0||i>=n)return false else return true;
#define isRanged2(i,j,n1,n2) if(i<0||i>=n1||j<0||j>=n2)return false; else return true;
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

#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))

const int maxn =100009;
ll temp[maxn];
ll finalAns[maxn];
ll ok[maxn];



ll parent[maxn];

void make_set(int v) {
    parent[v] = v;
}
int call=0;


int find_set(int v) {
  

    if (v == parent[v])
        return v;
    return parent[v]=find_set(parent[v]);
}

void union_sets(int a, int b) {


    a = find_set(a);
    b = find_set(b);
    
    if (a != b)
        parent[b] = a;
}



void solve()
{
ci2(ll,n,m)

vector<pair<int,int>>helper;

for(int i=0;i<m;i++)
{
    ci2(ll,a,b)
    a--;
    b--;

    helper.push_back({a,b});
}

iota(parent,parent+n,0);


ll ans=n;
ci(q)
for(int i=0;i<q;i++)
{
    ci(j)

    j--;
ok[i]=j;

    temp[j]=1;

}


for(int i=0;i<m;i++)
{

    if(temp[i])
    {
        continue;

    }

    ll a=find_set(helper[i].first);
    ll b=find_set(helper[i].second);

    if(a!=b)
    {
        parent[a]=b;
        ans--;

    }

}
//check(1)

//Value of ans after deleting every node . now traversing backward and finding all connected nodes
finalAns[q-1]=ans;

for(int i=q-1;i>0;i--)
{
    ll a=find_set(helper[ok[i]].first);
    ll b=find_set(helper[ok[i]].second);

    if(a!=b)
    {   parent[a]=b;

        ans--;

    }
    

    finalAns[i-1]=ans;


}
//printf("ok");


for(int i=0;i<q;i++)
{
    cout<<finalAns[i]<<" ";
}
idk


}

int main()
{
	fastio()
	//ci(testCase)
int testCase=1;

	while(testCase--)
	{

			solve();



	}
}
