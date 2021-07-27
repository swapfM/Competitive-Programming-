
 
 void solve(){
	
	ll n,k;
	
	cin>>n>>k;
	if(n<=k){cout<<"1\n";return;}
	
	int ans = n;
	ll t = sqrt(n);
	
	for(int i=2; i<=k&&i<=t; i++){
		
		
		if(n%i==0){
			int t;
			int x = n/i;
			if(x > k)t = x;
			else t = min(x,i);
			
			ans = min(t,ans);
			}
		
		
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

	
	
		
