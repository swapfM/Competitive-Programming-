#include<bits/stdc++.h>
using namespace std;


 int main()
 {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

 	int t,n;
 	cin>>t;
 	while(t--)
 	{   
 		cin>>n;

 		int a[n], b[101],ans=1;

              for(int i=0;i<=100;i++)b[i]=0;



 		for(int i=0;i<n;i++)
 			{
 				cin>>a[i];
 		        b[a[i]]++;
 		 
 		 	if(b[a[i]]==1 && i!=0)
 		 	{
                 ans=i+1;
 		 	}
 		 }
 		
                   
                   if(a[0]!=a[1] && a[1]==a[2])cout<<"1\n";
                   else
                   	cout<<ans<<'\n';



 	}
 }
