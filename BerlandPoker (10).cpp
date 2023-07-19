// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    int n, m, k;
    int result, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> m;
        cin >> k;
        if (m <= n/k)
        {
            result = m;
        }
        else
        {
            y = m - n/k;
            if (y % (k-1) == 0)
            {
                result = n/k - y/(k-1);
            }
            else
            {
                result = n/k - y/(k-1) - 1;
            }
        }
        cout << result << endl;
    }

	return 0;
}
