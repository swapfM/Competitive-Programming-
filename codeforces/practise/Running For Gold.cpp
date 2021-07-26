#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 void solve(){
	
	int n;
	cin>>n;
	int a;
	vector<vector<int>>v(n);
	
	for(int i=0; i<n; i++){
		
		for(int j=0; j<5; j++){
			
			cin>>a;
			v[i].push_back(a);
			
			
			}	
		}
		if(n==1){cout<<"1\n";return;}
		unordered_map<int,int>sup;
		int w=0;
		
		for(int i=1; i<n; i++){
			int c=0;
			
			for(int j=0; j<5; j++){
				
				if(v[i][j] < v[w][j])c++;
			
				}
				if(c>2)w=i;
				
				
			}
		
		
			
			for(int i=0; i<n; i++){
				int c =0;
				if(i==w)continue;
				
				for(int j=0; j<5;j++){
					
					if(v[i][j] < v[w][j])c++;
					
					}
				if(c >2){cout<<"-1\n";return;}
				
				
				}
				
				
				cout<<w+1<<"\n";
			
		
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
