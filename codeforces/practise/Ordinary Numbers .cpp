
#include<bits/stdc++.h> 
using namespace std;
 int main(){
     int t;
     cin>>t;

     while(t--){
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         int n,ans=0;
         cin>>n;
            int t = n;
            int arr[20],c=1;
         while(1){

             if(n>9){
             n/=10;
             ans+=9;
             c++;
             }
             else {
                 int temp=0;
                 for(int i=0;i<c;i++){
                  temp+= pow(10,i);
                 
                 }

                if(temp*n <= t)
                    cout<<ans+n<<"\n";
                 else cout<<ans+n-1<<"\n";

                 break;
             }

         }

     
 }}
