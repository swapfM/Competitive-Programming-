#include<bits/stdc++.h>
using namespace std;


void solve(string x,string y,int n)
{
    
		int a[n+1][2];
		a[0][1]=0;
		a[0][0]=0;
		

		if(x==y)cout<<"YES\n";
		else{
		
		for(int i=1;i<=n;i++)
		{ 
			if(x[i-1]=='0')
			{
				a[i][0]=1+a[i-1][0];
				a[i][1]=a[i-1][1];
				
			}
			else
			{
				a[i][1]=a[i-1][1]+1;
				a[i][0]=a[i-1][0];
			}
			
		}
		
		int r=0;
		
		for(int i=n-1;i>=0;i--)
		{
			if(r==0)
			{
			if(x[i]!=y[i])
			{
			  if(a[i+1][0]==a[i+1][1])r=1;
			  else
			  {
				  cout<<"NO\n";
				  r=-1;
				  break;
			  }
		  }}
		  else
		  {
			  if(x[i]==y[i])
			  {
				  if(a[i+1][0]==a[i+1][1])r=0;
				  else
				  {
					  cout<<"NO\n";
					  r=-1;
					  break;
				  }
			  }
		  }
	  }
	  
	  if(r!=-1)cout<<"YES\n";
	 
	 
 
}
}
					
		
		
               
 
 int main()
 {
 	

 	int t;
 	cin>>t;
 	while(t--)
 	{  
		int n;
		cin>>n;
		
 		string x,y;
 		cin>>x>>y;
 		solve(x,y,n);
 	}
 }
