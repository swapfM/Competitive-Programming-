
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 
 void solve(ll n){
	 
	 ll ans = 0;
	 while(n){
		 
		 
		 ll t = n, r=0,curr = 0, a=1;
		 
		 while(t){
			 
			 r = t%10;
			 t /= 10;
			 
			 if(r != 0)curr += a;
			 
			 a *= 10;
		 }
		 
		 ans++;
		 n -= curr;		 
		 
		 }
		cout<<ans<<"\n";
	 
	 }

		
int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int t;
 cin>>t;
 while(t--){
   
   ll n;
   cin>>n;
   
   solve(n);   
  
}
}
