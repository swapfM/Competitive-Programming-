#include<iostream>
using namespace std;

void large(int a, int b)
{
	for (int i = 1; i <= a; i++)
	{
		if (b >= 9) {
			cout << 9; b -= 9;
		}
		else
		{
			cout << b; b = 0;
		}
	}
}

void small(int a, int b)
{

	if (a == 1)cout << b;
	else
	{
		int c = b / 9;
		if ((a-1)*9 >b)
		{
			cout << 1;
			a--;
			b--;
		}
		c = b / 9;
		for (int i = 1; i <= a; i++)
		{
			if (i > a - c)cout << 9;
			else
			{
				if (i == a - c)cout << b % 9;
				else
					cout << 0;
			}
		}
	}
}
int main()
{
	int a, b;
	cin >> a >> b;
	double B = b;
	if ( (a>1 && b == 0) || (B / 9 > a))cout << "-1 -1";
	else
	{
		small(a, b);
		cout << " ";
		large(a, b);
	}
}
