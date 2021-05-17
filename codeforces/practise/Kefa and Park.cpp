#include<bits/stdc++.h>
using namespace std;


int n,k;
void dfs(vector<int>v[],int curr, int cat, int c[],int vis[]){
       
      vis[curr]=1;

      for(int i=0;i<v[curr].size();i++){
          int temp = cat;
        if(vis[v[curr][i]] != 1){
          if(c[v[curr][i]] == 1 &&  c[curr] == 1)
            temp++;
           else if(c[v[curr][i]] ==1 ) temp = 1;
           
           else temp = 0;

           if(temp > k)continue;

           dfs(v,v[curr][i],temp,c,vis);

      }
      }
}
int main(){

cin>>n>>k;

int c[n];
for(int i=0;i<n;i++)cin>>c[i];

vector<int>v[n];


for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    v[a-1].push_back(b-1);
    v[b-1].push_back(a-1);
}
int vis[n] = {0};
int ans = 0;
    dfs(v,0,c[0],c,vis);

    for(int i=1;i<n;i++)
    {
        if(vis[i]==1 &&  v[i].size()==1)ans++;
    }
    cout<<ans<<'\n';

}
