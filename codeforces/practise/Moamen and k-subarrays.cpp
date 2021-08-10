
void solve()
{
	ll n, k; cin>>n>>k;
	vector<ll> v(n);
	map<ll, ll> mp;
	for(int i=0; i<n; i++){
		cin>>v[i];  
	}
	vector<ll> c=v;
	sortall(c);
	for(int i=0; i<n; i++){
		mp[c[i]]=i; 
	}
	k--;
	for(int i=1; i<n; i++){
		if(mp[v[i]]-mp[v[i-1]]!=1){
			if(k>0){k--;}
			else{
				cout<<"NO\n"; return;
			}
		}
	}
	cout<<"YES\n";
 
}	
