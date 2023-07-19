// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, int x, int y)
{
	int mi = m;
	char current;
	int sequenceL, sum = 0;
	for (int i = 0; i < n; i++)
	{
		mi = m;
		sequenceL = 0;
		while (mi >= 1)
		{
			cin >> current;
			mi--;
			sequenceL = 0;
		
			while(mi > 0 && current == '.')
			{
				sequenceL++;
				mi--;
				cin >> current;
			}
			if (current == '.')
			{
				sequenceL++;
			}

			if (y < 2*x)
			{
				sum += y*(sequenceL/2);
				if (sequenceL % 2 != 0)
				{
					sum += x;
				}
			}
			else
			{
				sum += x*sequenceL;
			}
		}
	}

	cout << sum << endl;
	return 0;
}

int main() {
	int t;
	cin >> t;
	int n, m, x, y;
	for (int i = 0; i < t; i++)
	{

		cin >> n;
		cin >> m;
		cin >> x;
		cin >> y;
		solve(n, m, x, y);
	}

	return 0;
}
