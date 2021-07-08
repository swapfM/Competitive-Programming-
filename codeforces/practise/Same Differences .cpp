
#include<bits/stdc++.h> 
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

        ll arr[n+1];
        unordered_map<ll,ll> mp;

        for(int i=0;i<n;i++){

            cin>>arr[i];
            mp[arr[i]-(i+1)]++;
        }

        ll d = 1, ans=0;

       for(auto i :mp){
           ll t = i.second;
           ans+= (t*(t-1))/2;
       }

        cout<<ans<<"\n";


     }

     
 }
