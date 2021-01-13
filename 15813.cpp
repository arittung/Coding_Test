#include <iostream>

using namespace std;

int main() {
	int length;
	cin >> length;
	char *name = new char[length];
	cin >> name;

	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += (name[i] - 64);
	}
	cout << sum << endl;
	return 0;
}