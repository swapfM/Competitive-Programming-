#include<iostream>
#include<algorithm>
#include <vector>
typedef long long ll;
using namespace std;
ll ar[100001];
int main()
{
	int n, b;
	cin >> n;
	vector<ll>a;
	a.push_back(0);
	for (int i = 1; i <= n; i++)
	{
		cin >> b;
		if (ar[b] == 0)
		{
			a.push_back(b);
		}
		ar[b]++;
	}


	sort(a.begin() + 1, a.end(), greater<ll>());

	ll dp[100001];

	dp[0] = 0;
	dp[1] = a[1]*ar[a[1]];

	for (int i = 2; i < a.size(); i++)
	{
		if (a[i - 1] - a[i] == 1)
		{
			dp[i] = max(dp[i - 1], dp[i - 2] + (ar[a[i]] * a[i]));
		}
		else dp[i] = dp[i - 1] + (ar[a[i]] * a[i]);
	}
	cout << dp[a.size()-1];
}
	
	


	
