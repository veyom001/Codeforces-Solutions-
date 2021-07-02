#include<bits/stdc++.h>

using namespace std;


int help(int left,int right)
{
	if(left==right)
	{
		return 0;

	}

	else
	{
		return help(left/10,right/10)+right-left;

	}



}

void solve()
{

	int left,right;
	cin>>left>>right;

	int ok=help(left,right);
	cout<<ok<<endl;




}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{


		solve();



	}



}