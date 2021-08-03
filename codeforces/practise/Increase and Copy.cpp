#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
ll mod = 1e10 + 9;



void solve()
{

	ll n;
	cin >> n;



	ll a = sqrt(n);

	ll ans = a - 1;
	ans += (n / a) - 1;

	n % a == 0 ? cout << ans : cout << ans + 1 ;

	cout << "\n";





	return;





}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {

		solve();

	}
}
