


void solve() {

	vector<int>v(4, 0);
	unordered_map<int, int>mp;
	int a = 1;

	rep(i, 4) {
		cin >> v[i];
		mp[v[i]]++;
		mp[v[i]] > a ? a = mp[v[i]] : a;
	}

	if (a <= 2)cout << "2\n";
	else if (a == 3)cout << "1\n";
	else cout << "0\n";
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


