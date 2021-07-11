#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	
	int t;
	cin>>t;
	
	while(t--){
	
	int n,m,k;
	
	cin>>k>>n>>m;
	
	int a[n],b[m];
	
	for(int i=0 ;i<n; i++){
	
		cin>>a[i];
		
		}
		
		for(int i=0; i<m; i++)cin>>b[i];
		
		
		int x=0,y=0;
		vector<int>v;
		
		for(int i=0;i<n+m;i++){
			
			if(a[x]==0 && x<n){k++;x++; v.push_back(0); }
			
			else if(b[y]==0 && y<m){k++;y++;v.push_back(0); }
			
			else {
				
				
				
				if(a[x]<=k && x<n){ v.push_back(a[x]);x++; }
				
		
				
				else if(b[y]<=k && y<m){ 
					
					
					v.push_back(b[y]);
					y++;
					
					}
				
				else{
					
					x=-2;
					break;
					
					
					}
				
				
				}
			
			
			}
			
			if(x==-2)cout<<"-1\n";
			else 
			{
				for(int i=0;i<n+m;i++)cout<<v[i]<<" ";
				
				cout<<"\n";
				}
	

}

}


