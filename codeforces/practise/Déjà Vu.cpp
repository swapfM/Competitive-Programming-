#include<bits/stdc++.h>
using namespace std;


void solve(string s)
{
     int n=s.length();

     int ans=0,i=0;

     while(i<=n/2)
     {
       char l,r;
       l=s[i];
       r=s[n-i-1];

       if(l==r && l=='a')i++;
       else if(l=='a')
       {
       	cout<<"YES\n";
       	for(int j=0;j<=i;j++)cout<<'a';

       	for(int k=i;k<n;k++)cout<<s[k];

       	cout<<'\n';
         break;
       }
       else
       {
       	 	cout<<"YES\n";

       	for(int k=0;k<n-i;k++)cout<<s[k];

        cout<<'a';

        for(int j=n-i;j<n;j++)cout<<s[j];

        cout<<'\n';
    break;
       }
     }

     if(i>n/2)cout<<"NO\n";

}
 
 int main()
 {
 	

 	int t;
 	cin>>t;
 	while(t--)
 	{
 		string s;
 		cin>>s;
 		solve(s);
 	}
 }
