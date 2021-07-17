
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	
	int t;
	cin>>t;
	while(t--){
		
		
		int n; 
		cin>>n;
		
		vector<int>v(n);
		vector<int>ans;
		int a[n+1] = {0};
		int q=0;
		for(int i=0;i<n;i++){cin>>v[i];a[v[i]]++;}
		
		for(int i=0; i<n; i++){
			
			if(a[v[i]]==0 || a[v[i]]==-1){
				for(int j=1;j<=n;j++){
					if(a[j]==0 && j!=v[i]){ans.push_back(j);a[j]=-1;break;}
					
					}
					
				}
				else  {
					
					ans.push_back(v[i]);
					a[v[i]]=-1;
					q++;
					
					}
			
			
			}
			cout<<q<<"\n";
			
			for(int i=0; i<n;i++){
				
				cout<<ans[i]<<" ";
				
				}
				cout<<"\n";
		}
	}
