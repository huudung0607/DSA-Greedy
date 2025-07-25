
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
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	long long ans = 0;
	for (int i = n - 1; i >= 2; i--) {
		int l = 0, r = i - 1;
		while (l < r) {
			if (a[l] + a[r] > a[i]) {
				ans += (r - l);
				r--;
			}
			else l++;
		}
	}
	cout << ans;
}

