#include<bits/stdc++.h>
using namespace std;

bool solve(string s, int n)
{
    bool a=false,b=false;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && a==false)
        {
            for(int j=i+2;j<n-1;j++)
            {
                if(s[j]=='B' && s[j+1]=='A')return true;
                else if(j==n-2)a=true;
               
            }
        }

        if(s[i]=='B' && s[i+1]=='A' && b==false)
        {
            for(int j=i+2;j<n-1;j++)
            {
                if(s[j]=='A' && s[j+1]=='B')return true;
                 else if(j==n-2)b=true;
            }
        }
        if(a==true && b==true)return false;
    }
        
        return false;    
   

    
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    
    
    if(solve(s,n))cout<<"YES";
    else cout<<"NO";


}
