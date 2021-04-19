#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    


  int t;
  cin>>t;

  while(t--)
  {
  	int n;
  	cin>>n;
  	if(n==1)
  	{
  		int c;
  		cin>>c;
  		if(c==1)cout<<1<<'\n';
  		else cout<<"0\n";

  		continue;

  	}

  	int a[n],b[200001]={0},ans=0;
  	 for(int i=0;i<n;i++)cin>>a[i],b[a[i]]++;


  	 sort(a,a+n);
  	int rem=0;

  	for(int i=0;i<n;i+=b[a[i]])
  	{
  		  
  	       ans+= b[a[i]]/a[i];
  	       rem+= b[a[i]]%a[i];

  	       if(rem>=a[i])
  	       {
  	       	ans+= rem/a[i];
  	       	rem%= a[i];
  	       }

  	       if(a[i]>n-i+rem)break;


  	}

  	cout<<ans<<'\n';
  	} 

  }


