#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)





void solve() {

	int n, t, k;
	cin >> n >> t >> k;

	int l = 1, r = n, mid, in, ans = 0;

	while (l <= r) {

		mid = (l + r) / 2;

		cout << "? " << 1 << " " << mid << "\n";
		cout.flush();

		cin >> in;

		in = mid - in;


		if (in >= k)r = mid - 1, ans = mid;
		else l = mid + 1;

	}

	cout << "! " << ans << "\n";
	cout.flush();




}





int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int t;
	// cin >> t;
	// while (t--)
	solve();


}
