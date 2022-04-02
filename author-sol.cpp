#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// Then, the problem is reduced to erasing at most K elements from A
	// such that the minimum value is maximised. This can be done by sorting A
	// and erasing the first K smallest elements.
	
	// observation: remove the K smallest elements in the sequence so that the
	// minimum value of the sequence will be maximized
	
	// this can be done by changing the smallest element with its adjacent maximum element
	// and spend the remaining operations to change the new smallest element
	
	sort(a.begin(), a.end());
	k = min(k, n - 1); // answer is the (K + 1)-th element
	cout << a[k] << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
