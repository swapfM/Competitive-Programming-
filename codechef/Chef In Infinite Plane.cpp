
 
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
		
		sort(v.begin(), v.end());
		
		for(int i=0; i<n; i++){
			
			
			if(mp[v[i]] >= (v[i]-1)){
				
				ans = ans+ v[i]-1;
				
				}
				else ans += mp[v[i]];
				i = i+mp[v[i]]-1;
			
			
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

	
	
	
