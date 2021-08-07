
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)



void solve() {

	vector<int>v(3);

	int s1 = 0, s2 = 0;

	rep(i, 3) {
		cin >> v[i];
		s1 += v[i];
	}

	rep(i, 3) {
		cin >> v[i];
		s2 += v[i];
	}

	s1 > s2 ? cout << "1\n" : cout << "2\n";

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





