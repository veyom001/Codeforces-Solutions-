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

/*double ternary_search(double l, double r) {
    double eps = 1e-9;              //set the error limit here
    while (r - l > eps) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1);      //evaluates the function at m1
        double f2 = f(m2);      //evaluates the function at m2
        if (f1 < f2)
            l = m1;
        else
            r = m2;
    }
    return f(l);                    //return the maximum of f(x) in [l, r]
}*/

int red,blue,num1,num2;

bool valueFinder(ll cnt)
    {
      /*  ll redUsed=cnt*num1;
        ll blueUsed=cnt*num2;*/
ll g1Possible=red/num1;
ll g2possible=blue/num2;

ll type1Possible=min(g1Possible,g2possible);

ll ok1=red-type1Possible*num1;
ll ok2=blue-type1Possible*num2;


ll possibleNow=min(ok1/num2,ok2/num1);
//debug2(cnt,type1Possible+possibleNow)

if(type1Possible+possibleNow>=cnt)
{
    return true;
}
else
{
    return false;

}





    }

   bool valueFinder2(ll cnt)
    {
      /*  ll redUsed=cnt*num1;
        ll blueUsed=cnt*num2;*/
ll g1Possible=red/num2;
ll g2possible=blue/num1;

ll type1Possible=min(g1Possible,g2possible);

ll ok1=red-type1Possible*num2;
ll ok2=blue-type1Possible*num1;


ll possibleNow=min(ok1/num1,ok2/num2);

if(type1Possible+possibleNow>=cnt)
{
    return true;
}
else
{
    return false;

}





    }



void solve()
{

cin>>red>>blue>>num1>>num2;

ll okratio=red/num1;
ll okratio2=blue/num2;

if(okratio>okratio2)
{
    swap(num1,num2);

}




ll start=0;
ll end=1e9;
ll ans=0;

while(start<=end)
{   
    ll mid=(start+end)/2;

    bool ok1=valueFinder(mid);
    bool ok2=valueFinder2(mid);

    if(ok1||ok2)
    {
         ans=start;
        start=mid+1;
       

    }
    else
    {
        end=mid-1;

    }



}

	
            cout<<start<<endl;


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