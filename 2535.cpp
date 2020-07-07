#include <iostream>
using namespace std;

void swap(int* arr, int a, int b) {
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}
int main() {
	int n;
	cin >> n;
	int* contry;
	int* student;
	int* score;
	int* medal_Num;
	contry = new int[n];
	student = new int[n];
	score = new int[n];
	medal_Num = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> contry[i];
		cin >> student[i];
		cin >> score[i];
		medal_Num[i] = 0;
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (score[i] < score[j]) {
				swap(score, i, j);
				swap(student, i, j);
				swap(contry, i, j);
			}
		}
	}

	int cnt = 0;
	int i = 0;
	while (1) {
		if (medal_Num[contry[i]] < 2) {
			cout << contry[i] << " " << student[i] << endl;

			cnt++;
			medal_Num[contry[i]]++;
			i++;
		}
		else {
			i++;
		}
		if (cnt == 3) {
			break;
		}
	}
	delete[]student;
	delete[] contry;
	delete[] score;
	delete[] medal_Num;
	return 0;
}