/*#include<bits/stdc++.h>
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


//length of atmost k subarray sum 
const int maxn=500;
ll dp[maxn][maxn];



void solve()
{

ci2(string,s1,s2)


f
for(int i=0;i<=s1.size();i++)
{
    for(int j=0;j<=s1.size();j++)
    {
        cout<<dp[i][j]<<" ";
    }
    idk
}



//cout<<dp[a.size()][b.size()]<<endl;


}
int main()
{

    fastio()

 // ci(testcase)
   int testcase=1;

    while(testcase--)
    {
        solve();

    }
}

*/

// A Naive recursive C++ program to find the number of
// times the second string occurs in the first string,
// whether continuous or discontinuous
#include <iostream>
using namespace std;

// Recursive function to find the number of times
// the second string occurs in the first string,
// whether continuous or discontinuous
int count(string a, string b, int m, int n)
{
    // If both first and second string is empty,
    // or if second string is empty, return 1
    if ((m == 0 && n == 0) || n == 0)
        return 1;

    // If only first string is empty and second
    // string is not empty, return 0
    if (m == 0)
        return 0;

    // If last characters are same
    // Recur for remaining strings by
    // 1. considering last characters of both strings
    // 2. ignoring last character of first string
    if (a[m - 1] == b[n - 1])
        return count(a, b, m - 1, n - 1) +
            count(a, b, m - 1, n);
    else
        // If last characters are different, ignore
        // last char of first string and recur for
        // remaining string
        return count(a, b, m - 1, n);
}

// Driver code
int main()
{
    string a = "PENPINEAPPLEAPPLEPEN";
    string b = "PPAP";

    cout << count(a, b, a.size(), b.size()) << endl;

    return 0;
}
