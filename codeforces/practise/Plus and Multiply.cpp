
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;




void solve(){

	
	ll n,a,b;
	cin>>n>>a>>b;
	
	if(a==1){
		
		(n-1)%b==0? cout<<"Yes\n":cout<<"No\n";
		return;
		}
	
	ll r = n%b,s=1;
	
	
	while(s <= n){
		
		if(s%b == r){cout<<"Yes\n";return;}
		else s*=a;	
		
		}
		
		cout<<"No\n";
		return;
	
	
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
	
	
