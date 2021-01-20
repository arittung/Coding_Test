#include <iostream>
#include <string>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int n;
	cin >> n;
	int* weight = new int[n];
	int* height = new int[n];
	int* score = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> weight[i] >> height[i];
		score[i] = 0;

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (weight[i] < weight[j] && height[i] < height[j]) {
					//cout << weight[i] << " " << height[i] << " " << weight[j] << " " << height[j] << endl;
					score[i]++;
				}
				
			}
		}
	}

	

	for (int i = 0; i < n; i++) {
		cout << score[i]+1 << " ";
	}
	cout << endl;


	return 0;
}