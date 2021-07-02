 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci(a) ll a; cin>>a;
#define fo(i,a,b)  for(ll i=a;i<b;i++)
#define MOD 998244353

#define call(type,var) type var; cin>>var; 
#define ci2(type,a,b)  type a,b; cin>>a>>b;
#define ci3(type,a,b,c)  ll a,b,c; cin>>a>>b>>c;
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
const int maxn=2010;



void solve()
{

ci(n)
vect(ll,arr,n)
multiset<ll>helper;

for(int i=0;i<n;i++)
{
    helper.insert(arr[i]);

}
bool ans=true;
int ok=0;

while(ok<300)
{
    vector<ll>temp;
int cnt=0;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            ll diff=abs(arr[i]-arr[j]);

            if(helper.find(diff)==helper.end())
                {
                    cnt++;

                    helper.insert(diff);
                    temp.push_back(diff);
                }
                
        }
    }
    if(cnt==0)
    {
        break;
    }
   


ok++;
vector<ll>final;


//   std::copy(temp.begin(), temp.end(), std::back_inserter(arr));
merge(temp.begin(),temp.end(),arr.begin(),arr.end(),back_inserter(final));

  // arr.clear();
   arr=final;
        if(arr.size()>300)
        {
            ans=false;
            break;
        }
}
    if(ans)
    {
        cout<<"yes\n";
cout<<arr.size()<<endl;
        for(auto it:arr)
        {
            cout<<it<<" ";

        }
        cout<<endl;
    }
    else
    {
        cout<<"no\n";
    }

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