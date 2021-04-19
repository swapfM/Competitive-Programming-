#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    


  int t;
  cin>>t;

  while(t--)
  {
  	int n;
  	cin>>n;

  	int a[n];
  	 for(int i=0;i<n;i++)cin>>a[i];

  	 	long long int dp[n];

  	 dp[0]=a[0];
  	 int l =a[0];

  	 for(int i=1;i<n;i++)
  	 {
  	 	if((a[i]<0 && l>0) || (a[i]>0 && l<0))
  	 	{
  	 		dp[i]=dp[i-1]+a[i];
  	 		l=a[i];
  	 	}
  	 	else if(a[i]>l)dp[i]=dp[i-1]+a[i]-l, l=a[i];
  	 	else dp[i]=dp[i-1];
  	 }
    
  	 cout<<dp[n-1]<<'\n';
   
  

  }



}
