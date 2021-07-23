#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	string s;
	cin>>s;
	
	int n=s.length();
	int a[26]={0};
	
	for(int i=0; i<n; i++){
		
		a[s[i]-97]++;
		
		}
		int r=0,g=0;
		
		for(int i=0; i<26; i++){
			
			if(a[i]>1){r++;g++;}
			else if(a[i]==1)
			{
				
				if(r<g)r++;
				else g++;
				
				}
			
			}
			
			if(r==g)cout<<r<<"\n";
			else cout<<min(r,g)<<"\n";
	
	
	return;
	
 }
