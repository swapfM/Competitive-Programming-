#include<iostream>
using namespace std;

void solve(int a, int b)
{
	if (b <= a)cout <<a-b;
	else
	{
		int ans = 0;
		while (a != b)
		{
			if (b % 2 == 0 && b>a)b /= 2;
			else  b += 1;
			ans++;
		}

		cout << ans;
	}
}


int main()
{
	int a, b;
	cin >> a >> b;

	 solve(a, b);
}
