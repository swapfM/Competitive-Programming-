
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	
int n;
cin>>n;
string s;
cin>>s;

string t = s;

sort(t.begin(),t.end());

int ans=0;

for(int i=0; i<n; i++){
	
	if(t[i]!=s[i])ans++;
	
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
