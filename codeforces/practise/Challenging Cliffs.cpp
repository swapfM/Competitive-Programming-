
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;




void solve(){

	int n;
	cin>>n;
	vector<int>v(n);
	
	for(int i=0; i<n; i++)cin>>v[i];
	
	sort(v.begin(), v.end());
	
	int a=0,b=0,f=999999999;
	
	for(int i=1;i<n;i++){
		
		
		if(f>v[i]-v[i-1])a=i-1,b=i,f=v[i]-v[i-1];
		
		
		}
		
		cout<<v[a]<<" ";
	
	
	for(int i=0; i<n; i++){
		
		if(i==a || i==b)continue;
		
		n%2==0? cout<<v[i] : cout<<v[n-1-i];
		cout<<" ";
		
		}
		cout<<v[b]<<"\n";
	
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
	
	
