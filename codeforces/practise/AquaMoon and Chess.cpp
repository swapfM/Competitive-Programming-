
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;



ll modPow(ll a, ll x, ll p) {
  
    ll res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

ll modInverse(ll a, ll p) {
  
    return modPow(a, p-2, p);
}
ll modBinomial(ll n, ll k, ll p) {


    ll numerator = 1; 
    for (int i=0; i<k; i++) {
        numerator = (numerator * (n-i) ) % p;
    }

    ll denominator = 1; // k!
    for (int i=1; i<=k; i++) {
        denominator = (denominator * i) % p;
    }

   
    return ( numerator* modInverse(denominator,p) ) % p;
}	
		
int main()
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
	
 
 int t;
 cin>>t;
 while(t--){
   
   int n,z=0,p=0;;
   cin>>n;
 
 string s;
 cin>>s;
	for(int i=0; i<n; i++){
		
		if(s[i]=='1' && s[i+1]=='1'){p++;z++;i++;}
		else if(s[i]=='0') z++;
		}
		
		ll ans = 1;
	
		
		ans = modBinomial(z,p,mod);
		cout<<ans<<"\n";

  
}

	}
	
