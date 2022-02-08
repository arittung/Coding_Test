#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> his;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		his.push_back(a);
	}
	for (int i = 0; i < his.size(); i++) {
		for (int j = 0; j < his[i]; j++) {
			cout << "=";
		}
		cout << endl;
	}
	return 0;

}