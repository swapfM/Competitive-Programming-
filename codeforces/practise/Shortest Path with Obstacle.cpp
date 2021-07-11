#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	
	int t;
	cin>>t;
	
	while(t--){
	
	int a[2],b[2],c[2];
	
	cin>>a[0]>>a[1];
	
	cin>>b[0]>>b[1];
	
	cin>>c[0]>>c[1];
	
	int ans = abs(a[0]-b[0])+abs(a[1]-b[1]);
	
	if(a[0] !=b[0] && a[1] != b[1])cout<<ans<<"\n";
	
	else {
			
			if((a[0] == b[0]) && c[0] == a[0] ){
				
				if( (c[1] > a[1] && c[1] < b[1]) || (c[1] < a[1] && c[1] > b[1] )){
					
						cout<< ans+2 <<"\n";
					}
					else cout<<ans<<"\n"; 
				
				}
				
				
			else if((a[1] == b[1]) && c[1] == a[1] ){
				
				if( (c[0] > a[0] && c[0] < b[0]) || (c[0] < a[0] && c[0] > b[0] )){
					
						cout<< ans+2 <<"\n";
					}
					else cout<<ans<<"\n"; 
				
				}
				
				else cout<<ans<<"\n";
				
		}
}

}


