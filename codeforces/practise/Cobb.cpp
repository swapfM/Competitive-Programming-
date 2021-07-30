
 
 
 void solve(){
	
	int n,k;
	cin>>n>>k;
	
	vector<int>v(n+1);
	
	for(int i=1; i<=n; i++)cin>>v[i];
	
	ll ans = -99999999;
	
	for(int i=n; i>0; i--){
		
		
		for(int j = i-1; j>0; j--){
			
			
			ll t = i;
			t *= j;
			t -= k*(v[i] | v[j]);
			
			ans = max(ans,t);
			
			ll x = i;
			x*= (j-1);
			
			if(ans > x){break;}
			
			
			}
		
		
		
		}
		cout<<ans<<"\n";
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

