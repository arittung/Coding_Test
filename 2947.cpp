#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print(int* arr) {
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int tree[5];
	for (int i = 0; i < 5; i++) {
		cin >> tree[i];
	}
	int sum;
	while (1) {
		for (int i = 0; i < 4; i++) {
			if (tree[i] > tree[i + 1]) {
				swap(&tree[i], &tree[i + 1]);
				print(tree);
			}
		}

		

		sum = 0;
		for (int i = 0; i < 4; i++) {
			if (tree[i] < tree[i + 1]) {
				sum++;
			}
		}
		if (sum == 4) {
			break;
		}
	}
	return 0;
}