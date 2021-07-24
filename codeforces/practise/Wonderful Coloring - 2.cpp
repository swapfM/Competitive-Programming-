#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        vector<int> vrr[n+1];
        int ans[n]={0};
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            vrr[temp].push_back(i);
        }
        vector<int> temparray;
        
        for (int i = 1; i <= n; i++)
        {
            if(vrr[i].size()>=k){
                for (int j = 0; j < k; j++)
                {
                    ans[vrr[i][j]]=j+1;
                }
                
            }else{
                for (int j = 0; j < vrr[i].size(); j++)
                {
                    temparray.push_back(vrr[i][j]);
                }
                
            }
        }
        int siz =temparray.size() - temparray.size()%k;
        int curr=1;
        for (int i = 0; i < siz; i++)
        {
            if(curr>k){
                curr=1;
            }
            ans[temparray[i]] = curr;
            curr++;
        }
        
        for (auto x : ans)
        {
            cout<<x<<" ";
        }cout<<endl;
        
            
        
    }

    return  0;
}
