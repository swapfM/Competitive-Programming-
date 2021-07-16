#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	
	int n;
	cin>>n;
	
	int a[n],b[n],ps=0,s=0;
	vector<int>p;
	vector<int>ne;
	
	
	for(int i=0; i<n;i++)cin>>a[i];
	
	for(int i=0;i<n;i++){
		
		cin>>b[i];
		
		s+= a[i]-b[i];
		
		if((a[i]-b[i]) > 0){
			
			ps+=a[i]-b[i];
			
			for(int j=0; j<a[i]-b[i];j++){
				
				p.push_back(i+1);
				
				}
			}
		
		else if((a[i] - b[i]) <0 ){
				
			for(int j=0; j<abs(a[i]-b[i]);j++){
				
				ne.push_back(i+1);
				
				}				
			}
		
		}
		
		if(s!=0)cout<<"-1\n";
		
		else{
			
			cout<<ps<<"\n";
			
			for(int i=0; i<ps; i++){
				
				
			cout<<p.back()<<" "<<ne.back()<<"\n";
			
			ne.pop_back();
			p.pop_back();
			
			
			
			
			}
		
		
}

}
}


