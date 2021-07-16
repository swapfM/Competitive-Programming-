
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int t;
 cin>>t;
 while(t--){
   
   int n;
   cin>>n;
   
   vector<int>v(n);
   vector<int>t(n);
   
   for(int i=0; i<n; i++){cin>>v[i];t[i]=v[i];}
   
   
   sort(t.begin(),t.end());
   
   int freq[100001]={0},freq2[100001]{0};
   
   for(int i=0;i<n;i++){
	   
	   freq[v[i]] += i%2;
	   freq2[t[i]] += i%2;
	   }
	   
	   for(int i=0; i<n; i++){
		   
		   if(freq[v[i]] != freq2[v[i]]){n=-1;break;}
		   }
		   
		   n==-1?cout<<"NO\n" : cout<<"YES\n";
   
	    
   
   
}
}
