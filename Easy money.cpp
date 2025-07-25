
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
	string s; cin >> s;
	int n = s.size();
	string maxn = s;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			swap(s[i], s[j]);
			if (s > maxn) maxn = s;
			swap(s[i], s[j]);
		}
	}
	cout << maxn;
}

