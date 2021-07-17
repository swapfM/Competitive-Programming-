
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 998244353;
 
 
 
 void solve(int n,vector<int>&a,vector<int>&b,int &sa, int &sb){
	
		int r=0,t=n+1;
		
		while(sa<sb){
			
		
			b.push_back(0);
			
			if(t%4 !=0){
				
				sa += 100;
				r = t - t/4;
				
				
				sb+= b[r-1];
				
				//cout<<sa<<" "<<sb<<"\n";
				
				
				}
				else{
					int v = (t/4);
			
					if(v<=n)sa -= a[n-v];
					sa += 100;
									
					
					}
			
			t++;
			
			}
			cout<<t-n-1<<"\n";
	
	 }

	
	
		
int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int t;
 cin>>t;
 while(t--){
   
  int n;
  
  cin>>n;
  
  vector<int>a(n);
  vector<int>b(n);
  int sa=0,sb=0;
  
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){cin>>b[i];}
  
  
  sort(a.begin(),a.end(), greater<int>());
  sort(b.begin(),b.end(), greater<int>());
  int k = n-n/4;
  for(int i=0; i<k;i++){
	  sa += a[i];
	  sb += b[i];
	  
	  }
	  if(sa>=sb)cout<<"0\n";
  else solve(n,a,b,sa,sb);
  
  
  
}
}
