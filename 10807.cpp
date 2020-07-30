#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int find_num, sum = 0;
	cin >> find_num;
	for (int i = 0; i < n; i++) {
		if (find_num == num[i]) {
			sum++;
		}
	}
	cout << sum << endl;

	return 0;
}