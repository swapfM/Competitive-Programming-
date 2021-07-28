
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	
	int n;
	cin>>n;
	
	vector<int>v(n);
	ll ans = 0,sel=0;
	unordered_map<int,int>mp;
	
	for(int i=0; i<n; i++){
		
		cin>>v[i];
		mp[v[i]]++;
		
		}
		
		int rep = 0;
		
		for(int i=0; i<n; i++){
			
			if(mp[v[i]] > rep){
				
				sel = v[i];
				rep = mp[v[i]];
				}
			
			}
			
			for(int i=0; i<n; i++){
				
				
				ll xr = v[i] ^ sel;
				ans |= xr;
				
				
				}
				
				cout<<sel<<" "<<ans<<"\n";
		
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


	
	
