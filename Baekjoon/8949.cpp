#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	int max;
	if (a.size() > b.size()) {
		max = a.size();
	}
	else {
		max = b.size();
	}

	vector<int> anum(max, 0), bnum(max,0), res(max, 0);

	for (int i = 0; i < a.size(); i++) {
		int n = int(a[a.size()-i-1]) - '0';
		anum[i] = (n);
	}

	for (int i = 0; i < b.size(); i++) {
		int n = int(b[b.size()-1-i]) - '0';
		bnum[i] = (n);
	}

	for (int i = 0; i < max; i++) {
		res[i] = anum[i] + bnum[i];
	}

	for (int i = max-1; i >= 0; i--) {
		cout << res[i];
	}
	cout << endl;

	return 0;
}
