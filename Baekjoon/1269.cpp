#include <iostream>
using namespace std;

void swap(int arr[], int idx1, int idx2) {
	int tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
}

void Quicksort(int arr[], int left, int right) {
	if (left >= right) {	// ���Ұ� 1���� ���
		return;
	}
	int pivot = left;
	int start = left + 1;	// ���� �������
	int end = right;		// ������ �������

	while (start <= end) {	// �����Ͱ� ������������ �ݺ�

		while (arr[pivot] >= arr[start] && start <= right) {
			start++;
		}
		while (arr[pivot] <= arr[end] && end > left) {
			end--;
		}
		if (start > end) {	// �������� ���
			swap(arr, pivot, end);
		}
		else {
			swap(arr, start, end);
		}
	}
	Quicksort(arr, left, end - 1);
	Quicksort(arr, end + 1, right);
}


int main() {
	
	int a, b;
	int sum = 0;
	cin >> a >> b;
	
	int* anum = new int[a];
	int* bnum = new int[b];

	for (int i = 0; i < a; i++) {
		cin >> anum[i];
	}
	for (int i = 0; i < b; i++) {
		cin >> bnum[i];
	}

	Quicksort(anum, 0, a - 1);
	Quicksort(bnum, 0, b - 1);

	int acnt = 0, bcnt = 0;
	while (acnt < a && bcnt < b) {
		if (anum[acnt] == bnum[bcnt]) {
			//cout <<"same: " <<  anum[acnt] << endl;
			sum++;
			acnt++;
			bcnt++;
		}
		else if (anum[acnt] < bnum[bcnt]) {
			acnt++;
		}
		else {
			bcnt++;
		}
	}
	//cout <<"result: "<< a<<" " <<  b<< " "<< sum << endl;
	cout << a + b - (sum * 2) << endl;
	
	return 0;
}