
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
	
	if(n==1)cout<<"1\n";
	else {
		
		int t=sqrt(n);
		if(pow(t,2)==n)cout<<t<<"\n";
		else cout<<t+1<<"\n";
		
		}
	
	
}

}

 
