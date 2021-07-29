
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	
	int n;
	cin>>n;
	
	vector<ll>v(n);
	ll ans = 0,t=0;
	
	for(int i=0; i<n; i++)cin>>v[i];
	
	for(int i=1; i<n; i++){
		
		t = v[i] * v[i-1];
		
		ans = max(t,ans);
		
		
		}
		cout<<ans<<"\n";
		
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
