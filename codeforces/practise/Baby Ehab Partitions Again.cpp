


void solve() {

	int n;
	cin >> n;
	vector<int>arr(n);
	rep(i, n)cin >> arr[i];
	vector<int>odd;
	int sum = 0;
	int i;

	for (i = 0; i < n; i++) {
		sum += arr[i];

		if (arr[i] % 2 == 1)odd.push_back(i);

	}

	if (sum % 2 != 0)
	{cout << "0\n"; return;}


	bool res = find(n, sum, arr);

	if (res) {

		if (odd.size() != 0)cout << "1\n" << odd[0] + 1 << "\n";
		else {
			rep(i, n) {

				vector<int>temp;

				rep(j, n) {

					if (j != i)temp.push_back(arr[j]);
				}
				res = find(n - 1, (sum - arr[i]), temp);

				if (!res) {

					cout << "1\n" << i + 1 << "\n";
					return;
				}
			}
		}
	}
	else cout << 0 << "\n";

	return;


}




