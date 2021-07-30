
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	
	int n;
	cin>>n;
	char ch = 'x';
	string s = "";
	
	
	if(n==1){cout<<"x\n";return;}
	
	if(n%2==0){
		
		for(int i=0; i<n/2; i++)s+=ch;
		
		s +='a';
		for(int i=0; i<(n/2)-1;i++)s+=ch;
		
		
		}
		else {
			
			for(int i=0; i<n/2; i++)s+=ch;
		
		s +="ab";
		for(int i=0; i<(n/2)-1;i++)s+=ch;
			
			
			}
			
			cout<<s<<"\n";
	
}

