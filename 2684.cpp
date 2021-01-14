#include <iostream>
#include <string>
#define MAX 40
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string coin;
		cin >> coin;
		int sum = 0;
		for (int i = 0; i <= MAX-3; i++) {
			if (coin[i] == 'T' && coin[i + 1] == 'T' && coin[i + 2] == 'T') {
				sum++;
			}
		}
		cout << sum << " ";

		sum = 0;
		for (int i = 0; i <= MAX - 3; i++) {
			if (coin[i] == 'T' && coin[i + 1] == 'T' && coin[i + 2] == 'H') {
				sum++;
			}
		}
		cout << sum << " ";

		sum = 0;
		for (int i = 0; i <= MAX - 3; i++) {
			if (coin[i] == 'T' && coin[i + 1] == 'H' && coin[i + 2] == 'T') {
				sum++;
			}
		}
		cout << sum << " ";

		sum = 0;
		for (int i = 0; i <= MAX - 3; i++) {
			if (coin[i] == 'T' && coin[i + 1] == 'H' && coin[i + 2] == 'H') {
				sum++;
			}
		}
		cout << sum << " ";

		sum = 0;
		for (int i = 0; i <= MAX - 3; i++) {
			if (coin[i] == 'H' && coin[i + 1] == 'T' && coin[i + 2] == 'T') {
				sum++;
			}
		}
		cout << sum << " ";

		sum = 0;
		for (int i = 0; i <= MAX - 3; i++) {
			if (coin[i] == 'H' && coin[i + 1] == 'T' && coin[i + 2] == 'H') {
				sum++;
			}
		}
		cout << sum << " ";

		sum = 0;
		for (int i = 0; i <= MAX - 3; i++) {
			if (coin[i] == 'H' && coin[i + 1] == 'H' && coin[i + 2] == 'T') {
				sum++;
			}
		}
		cout << sum << " ";

		sum = 0;
		for (int i = 0; i <= MAX - 3; i++) {
			if (coin[i] == 'H' && coin[i + 1] == 'H' && coin[i + 2] == 'H') {
				sum++;
			}
		}
		cout << sum << endl;
	}
	return 0;
}