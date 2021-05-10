#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr = "Hello World, Judge";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << arr << " " << i + 1 << "!\n";
	}
	return 0;
}