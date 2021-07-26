
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;




void solve(){

		int n;
		cin>>n;
		
		vector<int>v(n);
		for(int i=0; i<n; i++)cin>>v[i];
		int e=0,o=0;
		
		
		for(int i=0; i<3; i++){
			
			if(v[i]%2==0)e++;
			else o++;
			}
			if(e>o){
			
			for(int i=0; i<n;i++){
				
				if(v[i]%2==1){cout<<i+1<<"\n";return;}
				
				}}
				
else {
					
					
			for(int i=0; i<n;i++){
				
				if(v[i]%2==0){cout<<i+1<<"\n";return;}
				
				}}
					
					
					}
			
	
	



int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	
		
		solve();
		
		
	}
	
	
