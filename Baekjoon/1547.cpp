#include <iostream>
using namespace std;

void swap(int* m, int* k) {
	int tmp = *m;
	*m = *k;
	*k = tmp;
}

int main() {
	int ball[3] = { 1, 2, 3 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m, k;
		cin >> m >> k;
		int mnum = 0, knum = 0;
		for (int j = 0; j < 3; j++) {
			//cout << ball[j] << endl;
			if (ball[j] == m) {
				mnum = j;
			}
			if (ball[j] == k) {
				knum = j;
			}
		}
		//cout << mnum << " " << knum << endl;
		/*for (int i = 0; i < 3; i++) {
			cout << ball[i] << " ";
		}
		cout << endl;*/
		swap(&ball[mnum], &ball[knum]);
	}
	cout << ball[0] << endl;
	return 0;
}