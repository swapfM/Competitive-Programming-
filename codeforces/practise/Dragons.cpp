
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
 
 
   int n,s;
   cin>>s>>n;
   
     vector<pair<int,int>>v(n+1);
     
     for(int i=1;i<=n;i++){
		 
		 cin>>v[i].first>>v[i].second;
		 }
		 
		 sort(v.begin(),v.end());
		 
		 for(int i=1;i<=n;i++){
			 
			 if(s>v[i].first){s+=v[i].second;}
			 else {cout<<"NO\n";exit(0);}
			 }
			 
			 cout<<"YES\n";
}
