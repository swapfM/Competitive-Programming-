
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		ll sum=0;
		for(int i=0;i<n;i++)
		cin>>ar[i],sum+=ar[i];
		sort(ar,ar+n);
		cout<<fixed<<setprecision(10)<<(sum-ar[n-1])/(n-1)+ar[n-1]<<"\n";
	}
}
