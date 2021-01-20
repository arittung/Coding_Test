#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* vote = new int[n];
	int* person = new int[n];
	for (int i = 0; i < n; i++) {
		vote[i] = 0;
		person[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num != 0) {
			vote[num - 1]++;
		}
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n; j++) {
			if (vote[i] < vote[j]) {
				int tmp = vote[i];
				vote[i] = vote[j];
				vote[j] = tmp;
				int temp = person[i];
				person[i] = person[j];
				person[j] = temp;

			}
		}
	}

	if (vote[0] == vote[1]) {
		cout << "skipped" << endl;
	}
	else {
		cout << person[0] << endl;
	}

	return 0;
}