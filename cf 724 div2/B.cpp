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
call(string,str)
multiset<char>helper;


for(int i=0;i<n;i++)
{
        helper.insert(str[i]);
}
for(char i='a';i<='z';i++)
{
    if(helper.find(i)==helper.end())
    {
        cout<<i<<endl;
        return ;
    }
}






for(int h1=0;h1<26;h1++)
{
    for(int j=0;j<26;j++)
    {
        char s1=h1+'a';
        char s2=j+'a';
        
        string s="";

        s+=s1;
        s+=s2;
     //   cout<<s<<endl;
    
     if (str.find(s) == std::string::npos) {
    std::cout << s << '\n';
    return;
}
    }
}
for(int h3=0;h3<26;h3++){
for(int h1=0;h1<26;h1++)
{
    for(int j=0;j<26;j++)
    {
        char s1=h1+'a';
        char s2=j+'a';
        char s3=h3+'a';
        string s="";
        s+=s3;

        s+=s1;
        s+=s2;

     
    
     if (str.find(s) == std::string::npos) {
    std::cout << s << '\n';
    return;
}
    }
}
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