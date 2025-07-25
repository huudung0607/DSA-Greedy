
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
	vector<long long> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<int> small(n, 0);
	vector<int> big(n, 0);
	long long minl = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > minl) {
			small[i] = 1;
		}
		minl = min(minl, a[i]);
	}
	long long maxr = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		if (a[i] < maxr) {
			big[i] = 1;
		}
		maxr = max(maxr, a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (big[i] && small[i]) {
			cout << "28tech"; return 0;
		}
	}
	cout << "29tech";
}

