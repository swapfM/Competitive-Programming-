#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y,d,a;
		cin>>n>>x>>y;
		
		d=y-x;
		if(n>d)a=1;
		else{
		for(int i=min(d,n)-1;i>=1;i--)
		{
			if(d%i==0 && i<n )
			{a=d/i;break;}

		}
	}
		 int xx=x;
		 cout<<x<<' ';
		 n--;
		while(n>0)
		{
		
		if(xx+a<=y)cout<<xx+a<<' ',xx+=a,n--;
		else break;
	}
	xx=x;
	while(n>0)
	{
		if(xx-a>0)cout<<xx-a<<' ',xx-=a,n--;
		else break;
	}
	while(n>0)
	{
		cout<<y+a<<' ',n--;
		y+=a;
	}
	cout<<'\n';
}
}
