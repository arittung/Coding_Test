#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> num;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a != 0) {
			num.push_back(a);
		}
		else {
			num.pop_back();
		}
	}
	int sum = 0;
	for (int i = 0; i < num.size(); i++) {
		sum += num[i];
	}
	cout << sum << endl;

	return 0;
}