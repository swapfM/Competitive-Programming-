#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;




void solve(){

		
		ll a,b;
		
		cin>>a>>b;
		
		if(a==b)cout<<"0 0\n";
		else if(a+1==b || b+1==a)cout<<"1 0\n";
		
		else {
			ll d = abs(a-b);
			
			ll rr = min((b - (b / d) * d), ((b / d) + (b % d != 0)) * d - b);
			
			cout<<d<<" "<<rr<<"\n";
			
			
			
			
			
			}
		
					
					
					}
			
	
	



int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
	
		solve();
	
	}
	}
	
	
