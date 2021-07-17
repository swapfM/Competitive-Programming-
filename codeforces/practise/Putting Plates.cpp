
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 
 void solve(int a, int  b){
	
		for(int i=0; i<a; i++){
			
			if(i==0){for(int j=0; j<b; j++)j%2==0?cout<<1:cout<<0;}
			
			else if(i == a-1){for(int j=0;j<b;j++)j%2==0?cout<<1:cout<<0;}
			
			else if(i==a-2 || i%2==1)for(int j=0; j<b; j++)cout<<0;
			
			else
			{
				cout<<1;
				for(int j=0; j<b-2; j++)cout<<0;
				cout<<1;
				
				}
				
				
				
				
			cout<<"\n";
			
			
			}
	
	
	
	
	 }

		
int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int t;
 cin>>t;
 while(t--){
   
  int a,b;
  cin>>a>>b;
  solve(a,b);
  
}
}
