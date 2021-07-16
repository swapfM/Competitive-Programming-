
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
 
 int t;
 cin>>t;
 while(t--){
   int n,m;
   
   cin>>n>>m;
   
   vector<string>v(n);
   
   for(int i=0; i<n; i++)cin>>v[i];
   
   vector<string>s(n-1);
   
   for(int i=0; i<n-1; i++)cin>>s[i];
   
   string ans="";
   
   for(int i=0; i<m; i++){
	   
	   int arr[26]={0};
	   
	   for(int j=0; j<n; j++){
		   
		   arr[v[j][i]-97]++;
		   }
		   
		   for(int k=0; k<n-1; k++){
			   
			   arr[s[k][i]-97]--;
			   }
			   
			 for(int l=0; l<26; l++){
				 
				 if(arr[l]!=0)
				 ans+=char(l+97);
				 
				 }
	   }
	   
	   cout<<ans<<"\n";
	   cout<<flush;
	  
   }
   
}
