#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	
	int n;
	cin>>n;
	
	vector<int>v(n);
	ll s=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		
		s+= v[i];
	}
	
	ll r = s%n;
	
	ll ans = r*(n-r);
	
	cout<<ans<<"\n";
	

}

}


