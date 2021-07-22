
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	 
	 string s,a;
	 cin>>s>>a;
	 
	 int n=s.length();
	 int m = a.length();
	 
	 for(int i=0; i<n; i++){
		 
		 
		 if(s[i]==a[0]){
			 int j=0, ii=i;
			 
			 for(; j<m; j++){
				 
				 if(a[j]==s[ii]){ii++;continue;}
				 else break;
				 
				 }
				ii-=2;
				 
				 for(;j<m;j++){
					 
					 if(a[j]==s[ii]){ii--;continue;}
					 else break;
					 
					 }
					 
					 if(j==m){cout<<"YES\n";return;}
					 
				 }		 
			 
			 
			 
			 }
	 
	 cout<<"NO\n";
	 return;
 }

	
	
		
int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int t;
 cin>>t;
 while(t--){
	
	
	solve();
}
}
