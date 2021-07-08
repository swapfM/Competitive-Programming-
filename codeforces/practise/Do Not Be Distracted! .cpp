
#include<bits/stdc++.h> 
using namespace std;
 int main(){

     int t;
     cin>>t;

     while(t--){

         int n;
         cin>>n;
         string s;
         cin>>s;

         bool arr[26]={0};

         for( int i=0;i<n;i++){
             char a = s[i];
             
             if(arr[a-65]==false)arr[a-65]=1;
             
            else if(s[i-1] != a) {
                n=-1;
                break;
            }
         }

         if(n==-1)cout<<"NO\n";
         else cout<<"YES\n";
     }

     
 }
