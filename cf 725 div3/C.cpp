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

void solve()
{
 ci3(ll,n,l,r)

 vect(ll,arr,n)
sort(all(arr));
ll ans=0;

//print(arr)
    for(int i=0;i<n;i++)
    {

        auto it=lower_bound(arr.begin()+i+1,arr.end(),l-arr[i]);

        ll ok=r-arr[i];

        auto it2=upper_bound(arr.begin()+i+1,arr.end(),ok);

        auto it3=it2;   
        int val1=it-arr.begin();
        int val2=it2-arr.begin();
        ans+=(val2-val1);
      //  debug2(val1,val2)

       /* it3--;
        if(*it3==ok)
        {
            auto index1=it-arr.begin();
            auto index2=it3-arr.begin();

            if(index1>index2)
            {
                continue;

            }
            ans+=abs(index1-index2);
           // debug2(index1,index2)
            
        }
        else if(it2!=arr.end())
        {
            auto index1=it-arr.begin();
            auto index2=it2-arr.begin();
             if(index1>index2)
            {
                continue;
                
            }
            ans+=abs(index1-index2);
//            debug2(index1,index2)


        }
        else
        {
            auto index1=it-arr.begin();
            auto index2=it3-arr.begin();
             if(index1>index2)
            {
                continue;
                
            }
            ans+=abs(index1-index2);
           // debug2(index1,index2)
        }
*/



    }
    cout<<ans;
    idk



}



int main()
{

    fastio()

 ci(testcase)
  // int testcase=1;

    while(testcase--)
    {
        solve();

    }
}