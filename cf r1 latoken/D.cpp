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
//#define endl "\n"
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

#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))

void solve() {
    int n;
    cin>>n;
    cout<<"? 1\n";
    cout.flush();
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    set<int> s;
    set<vector<int>> edges;
    s.insert(1);
    queue<int> q;
    int odd=0;
    int even=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==1){
            edges.insert({1,i});
        }
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    // cout<<odd<<" "<<even<<endl;
    if(odd>=even){
        for(int i=2;i<=n;i++){
            if(arr[i]%2==0){
                q.push(i);
            }
        }
    }
    else{
        for(int i=2;i<=n;i++){
            if(arr[i]%2==1){
                q.push(i);
            }
        }
 
    }
    cout.flush();
    
   
    while(edges.size()<(n-1)){
        int frt=q.front();
        q.pop();
        cout<<"? "<<frt<<"\n";
        cout.flush();
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            if(arr[i]==1){
                vector<int> temp={frt,i};
                sort(temp.begin(),temp.end());
                edges.insert(temp);
            }
        }
        cout.flush();
    }
    cout<<"!\n";
    for(auto x: edges){
        cout<<x[0]<<" "<<x[1]<<"\n";
    }
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