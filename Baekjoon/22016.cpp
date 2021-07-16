#include <iostream>

using namespace std;

int main() {
	int n, k;
	string t;
	cin >> n >> k >> t;


	for (int i = k - 1; i < t.size(); i++) {
		if (t[i] >= 'a' && t[i] <= 'z') {
			t[i] += ('A' - 'a');
		}
		else {
			t[i] += ('a' - 'A');
		}
	}

	cout << t << endl;

	return 0;
}