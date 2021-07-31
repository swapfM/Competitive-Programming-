
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e7 + 9;

void solve() {

	int n, man, ff;
	cin >> n;

	ll bb = mod;

	vector<int>a(n);
	vector<int>b(n);
	vector<int>bac;

	for (int i = 0; i < n; i++)cin >> a[i];

	for (int i = 0; i < n; i++)cin >> b[i];



	for (int i = 0; i < n; i++) {

		man = a[0] + b[i];

		man %= n;

		if ( bb >= man) {

			bb = man;
			ff = i;
			bac.push_back(i);
		}

	}




	int l = bac.size();

	ff = bac[l - 1];


	vector<int>ans1;

	int curr = 0;

	for (int i = ff; i < n; i++) {

		ans1.push_back((a[curr] + b[i]) % n);
		curr++;

	}

	for (int i = 0; i < ff; i++) {

		ans1.push_back((a[curr] + b[i]) % n);

		curr++;
	}


	vector<int>ans2;


	if (l > 1) {


		ff = bac[l - 2];


		curr = 0;

		for (int i = ff; i < n; i++) {

			ans2.push_back((a[curr] + b[i]) % n);
			curr++;

		}

		for (int i = 0; i < ff; i++) {

			ans2.push_back((a[curr] + b[i]) % n);

			curr++;


		}



		for (int i = 0; i < n; i++) {

			if (ans1[i] > ans2[i]) {curr = -1; break;}

			else if (ans1[i] < ans2[i])break;

		}



	}

	if (curr == -1) {
		for (auto ass : ans2)cout << ass << " ";
	}
	else {
		for (auto ass : ans1)cout << ass << " ";
	}

	cout << "\n";


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


