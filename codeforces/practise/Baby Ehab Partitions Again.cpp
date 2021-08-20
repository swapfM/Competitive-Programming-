

bool find(int n, int sum, vector<int>&arr ) {


	bool part[n + 1][sum / 2 + 1];
	int i, j;

	for (i = 0; i <= sum / 2; i++)
		part[0][i] = false;


	for (i = 0; i <= n; i++)
		part[i][0] = true;


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= sum / 2; j++)
		{
			part[i][j] = part[i - 1][j];
			if (j >= arr[i - 1])
				part[i][j] = part[i][j] ||
				             part[i - 1][j - arr[i - 1]];

		}
	}
	return part[n][sum / 2];
}



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

