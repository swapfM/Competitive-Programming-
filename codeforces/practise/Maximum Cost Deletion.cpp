#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	
	
	int n,a,b;
	cin>>n>>a>>b;
	
	string s;
	cin>>s;
	
	
	
	int alt = n*(a+b);
	
	
   
    
    int t=0;
    
    for(int i=1;i<n;i++){
		
		if(s[i]!=s[i-1])t++;
		
	}
		
		t++;
		
		int ans = a*n + (t/2 + 1)*b;
	
	
		ans=max(alt,ans);
		cout<<ans<<"\n";
	

}}

