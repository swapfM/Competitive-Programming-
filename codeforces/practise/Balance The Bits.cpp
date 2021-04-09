#include<bits/stdc++.h>
using namespace std;




void solve(string s, int n)
{
    
    int z=0, o =0,op=0;
    string a,b;
    for(int i=0;i<n;i++)
    {
    	if(s[i]=='1')o++;
    	else z++;
    }


    if(z%2!=0 || o%2!=0 || s[0]=='0' || s[n-1]=='0')cout<<"NO\n";
    else
    {   
    	for(int i=0;i<n;i++)
    	{
    	if(s[i]=='1')
    	{
    		if(op<o/2)
    		{
             	a+='(';
             	b+='(';
             	op++;  
    		}

    		else 
    		{
    			a+=')';
    			b+=')';
    		}
    	}

    	else
    	{
    		if(z%2==0)
    		{
    			a+='(';
    			b+=')';
    			z--;
    		}
    		else
    		{
    			a+=')';
    			b+='(';
    			z--;
    		}
    	}
    }

    cout<<"YES\n";
    cout<<a<<'\n'<<b<<'\n';
    }
}


 int main()
 {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

 	int t,n;
 	cin>>t;
 	while(t--)
 	{   
 		cin>>n;

 		string s;
 		cin>>s;
 		solve(s,n);
 	}
 }
