#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maxlen = 0;
	for (int i = 0; i < n; i++) {
		if (i > maxlen) {
			cout << "29tech";
			return 0;
		}
		maxlen = max(maxlen, i + a[i]);
		if (maxlen >= n - 1) {
			cout << "28tech";
			return 0;
		}
	}
	cout << "29tech";
}
