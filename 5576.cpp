#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main() {
	int w[10];
	int k[10];
	for (int i = 0; i < 10; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> k[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i; j < 10; j++) {
			if (w[i] < w[j]) {
				swap(&w[i], &w[j]);
			}
			if (k[i] < k[j]) {
				swap(&k[i], &k[j]);
			}
		}
	}
	int wsum = 0, ksum = 0;
	for (int i = 0; i < 3; i++) {
		wsum += w[i];
		ksum += k[i];
	}
	cout << wsum << " " << ksum << endl;
	return 0;
}