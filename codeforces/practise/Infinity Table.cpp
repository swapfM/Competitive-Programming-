#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)



void solve() {


	ll n;
	cin >> n;

	ll a = sqrt(n);

	int r = 0;
	if (pow(a, 2) == n)r = a;
	else r = a + 1;


	ll s = pow(r - 1, 2);
	ll rem = n - s;


	if (rem <= r)cout << rem << " " << r << "\n";
	else cout << r << " " << 2 * r - rem << "\n";
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


