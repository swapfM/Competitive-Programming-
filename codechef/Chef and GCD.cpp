
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	
	ll x,y;
	cin>>x>>y;
	
	int res = 0;
	if(x==1){
		
		res++;
		x++;
		
		}
		if(y==1){
			
			
			res++;
			y++;
			
			
			}
			
			if(__gcd(x,y) > 1){
				
				cout<<res<<endl;
				
				}
				else {
					
					if(x%2 == 1 && y%2 == 1){
						
						if(__gcd(x+1,y) >1)cout<<res+1<<endl;
						else if(__gcd(x,y+1)>1)cout<<res+1<<endl;
						else cout<<res+2<<endl;
						
						
						}
						else cout<<res+1<<endl;
					
					
					}
		
	return;
	
 }

	
	
