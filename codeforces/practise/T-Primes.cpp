
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
 
 
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
     }
     
     
     bool vs[1000001]={0};
    
     
     vs[1]=1;
     for(int i=3; i<=1e6+1; i+=2){
		 if(vs[i]==0){
		for(int j=2*i; j<=1e6; j+=i){
			
			vs[j]=1;
			}
		}
 }
 
 
			for(int i=0; i<n; i++){
				
				if(a[i]==4){cout<<"YES\n";continue;}
				
				ll temp = sqrt(a[i]);
				
				if(pow(temp,2)==a[i] && vs[temp]==0 && a[i]%2!=0)cout<<"YES\n";
				else cout<<"NO\n";
				
				}
}
