#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	string num;
	cin >> num;
	for (int i = 0; i < n; i ++ ) {
		sum += (num[i] - 48);
	}
	cout << sum << endl;
	return 0;
}