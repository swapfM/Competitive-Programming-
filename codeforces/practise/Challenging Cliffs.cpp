
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
ll mod = 1e10 + 9;



void solve()
{

	int n;
	cin >> n;

	vector<ll>v(n), ans;

	unordered_map<ll, int>mp;


	rep(i, n) {
		cin >> v[i];
		mp[v[i]]++;
	}

	sort(v.begin(), v.end());

	ll a, b, m = mod;

	REP(i, 1, n - 1) {

		if (m > v[i] - v[i - 1]) {
			m = v[i] - v[i - 1];
			a = i - 1;
			b = i;
		}
	}

	mp[v[a]]--;
	mp[v[b]]--;
	ans.push_back(v[a]);


	REP(i, a + 1, n - 1) {

		if (mp[v[i]] > 0) {

			ans.push_back(v[i]);

			mp[v[i]]--;

			// REP(j, i + 1, n - 1) {

			// 	if (v[j] > v[i] && mp[v[j]] > 0) {
			// 		nx = j;
			// 		break;
			// 	}


			// }

			// ans.push_back(v[i]);
			// mp[v[i]]--;

			// if (nx != -1) {
			// 	ans.push_back(v[nx]);
			// 	mp[v[nx]]--;
			//}


		}
	}

	rep(i, a) {

		if (mp[v[i]] > 0) {

			ans.push_back(v[i]);

			mp[v[i]]--;
		}
	}

	ans.push_back(v[b]);

	for (auto xx : ans)cout << xx << " ";

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
