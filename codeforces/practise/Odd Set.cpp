
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;




void solve(){
	
	int n;
	cin>>n;
	n*=2;
	int a=0,b;
	
	for(int i=0;i<n;i++){
		
		cin>>b;
		b%2==0 ?a++:a--;
		
		}
		
		a==0?cout<<"Yes\n":cout<<"No\n";
	
	
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
	
	
