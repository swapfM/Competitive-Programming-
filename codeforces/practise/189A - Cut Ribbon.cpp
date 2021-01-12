#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	vector<int> s;
	cin>>n>>a>>b>>c;
	
	int dp[n+1];
	for(int i=0;i<=n;i++)dp[i]=-99999999;
	dp[0]=0;
	s.push_back(a);
	s.push_back(b);
	s.push_back(c);
	sort(s.begin(),s.end());
	
	for(int i=s[0];i<=n;i++)
	{  
		for(int u:s)
		{
			if(u<=i)
				dp[i]=max(dp[i],dp[i-u]+1);
			}
		}
		cout<<dp[n];
	
}
