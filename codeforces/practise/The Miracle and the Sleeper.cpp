
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)




void solve() {


	ll a, b;

	cin >> a >> b;
	if (a == b) {cout << "0\n"; return;}

	ll ans = max((b % a), (b % (a + 1)));

	if (a <= b / 2)ans = max(ans, b % (b / 2 + 1));

	cout << ans << "\n";
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
	while (t--)
		solve();


}
