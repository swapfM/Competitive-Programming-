
#include<bits/stdc++.h> 
using namespace std;
 int main(){

     int t;
     cin>>t;

     while(t--){

         int n,ans=1,c=1;
         cin>>n;

         if(n==2){cout<<"-1\n";continue;}
           int d = (n*n+1)/2;

           for(int i=1;i<=n;i++){

               for(int j=1;j<=n;j++){

                   if(c%2==1){
                       cout<<ans<<" ";
                       c++;
                   }    

                   else{
                       cout<<ans+d<<" ";
                       ans++;
                       c++;

                   }
                   


               }
               cout<<"\n";

           }
         }

     
 }
