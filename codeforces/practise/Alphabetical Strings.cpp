#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	
	int t;
	cin>>t;
	
	while(t--){
	
	string s;
	cin>>s;
	
	if(s=="a")
	{cout<<"YES\n"; continue;}
	
	int n = s.length();
	int l=-1,r=-1;
	
	for(int i=0;i<n;i++){
	if(s[i]=='a'){l=i;r=i;break;}
   }
   
   if(l==-1){cout<<"NO\n"; continue;}
   char ch = 'b';
   
   n-=1;
  
   while(n){
	   
	   if(s[l-1] == ch )l-=1;
	   
	   else if(s[r+1] == ch)r+=1;
	   
	   else {cout<<"NO\n";n=-2; break;}
	   
	   ch++;
	   n--;
	   
	   }
	   if(n!=-2)
	   cout<<"YES\n";
	   
}

}


