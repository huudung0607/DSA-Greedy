
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
	int n; cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	long long sum = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i + 1] > a[i]) {
			sum += a[i + 1] - a[i];
		}
	}
	cout << sum;
}

