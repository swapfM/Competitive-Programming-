

void solve() {


	ll n;
	cin >> n;

	ll a = sqrt(n);

	int r = 0;
	if (pow(a, 2) == n)r = a;
	else r = a + 1;


	ll s = pow(r - 1, 2);
	ll rem = n - s;


	
	return;


}



