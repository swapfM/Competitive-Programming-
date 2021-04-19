#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    


    int n,m;
    cin>>n;
    int boy[n];
    for(int i=0;i<n;i++)cin>>boy[i];

    cin>>m;
	

	int girl[m];

	for(int i=0;i<m;i++)cin>>girl[i];


	sort(boy,boy+n);
    sort(girl,girl+m);

    int ans=0,k=0;

    for(int i=0;i<n;i++)
    {
    	for(int j=k;j<m;j++)
    	{
    		if(girl[j]-boy[i]>1)break;

    		else if(abs(girl[j]-boy[i])<=1)
    		{
    			ans++;
    			k=j+1;
    			break;
    		}
    	}
    }

    cout<<ans;
                     

}
