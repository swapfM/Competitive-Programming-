
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
		
	ll n;
	cin>>n;
	
	ll a,b;
	
	a = n/3;
	b = a;
	
	
	if(n%3 == 1)a++;
	else if(n%3 ==2)b++;
	
	cout<<a<<" "<<b<<"\n";
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
