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
#define condition(ok)  if(ok){cout<<"YES"<<endl; } else cout<<"NO"<<endl;
#define debug(a) cout<<"element is "<<a<<endl;
#define debug2(a,b) cout<<"2 element is "<<a<<" "<<b<<endl;
#define debug3(a,b,c) cout<<"3 element is "<<a<<" "<<b<<" "<<c<<endl;
#define check(a) if(a==1)cout<<"h1 ";if(a==2) cout<<"h2 "; if(a==3)cout<<"h3 "; idk

bool isPrime[1000008];
vector<ll>primes;
 
bool check_prime(int n)
{
    for (int i = 2; i*i<=n; i++) if (n%i==0) return false;
    return true;
}

int cnt(int n)
{
    vector<int>allFactors 
    int ans = 0;
    for (auto it: primes) if (n%it==0)
    {

        
        while (n%it==0)
        {
            ans++; n/=it;
        }

    }
    if (n>1) ans++;
    return ans;
}

void solve()
{
    ci3(ll,a,b,k)
 
    ll keepera=a;
    ll keeperb=b;


    if(a==b&&k==1)
    {
        cout<<"NO"<<endl;
        return ;


    }

ll maxima=cnt(a)+cnt(b);





    if(keepera>keeperb)swap(keepera,keeperb);


    if(k==1){
            if(keepera!=keeperb and keeperb%keepera==0) cout << "YES\n";
            else cout << "NO\n";
           
        }
        else
        {
            if(maxima>=k)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
            idk

        }





//debug2(minima,maxima)



//debug2(k,maxima)


 }


int main()
{

    fastio()
 
    for (int i = 2; i*i<=1e9; i++) if (check_prime(i)) primes.push_back(i);

 ci(testcase)
  // int testcase=1;



    while(testcase--)
    {
        solve();

    }
}