#include <iostream>
using namespace std;

int main() {
	string alpha;
	cin >> alpha;
	int sum = 0;
	for (int i = 0; i < alpha.size(); i++) {
		if (alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i' || alpha[i] == 'o' || alpha[i] == 'u') {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}