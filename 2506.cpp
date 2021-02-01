#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* score = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	int total = 0, num = 1, i = 0;
	while (1) {
		//cout <<  score[i] << endl;
		if (i != 0) {
			if (score[i] == 1) {
				if (score[i - 1] == 0) {
					num = 1;
				}
				total += num;
				//cout << "+ " << num << endl;
				num++;
			}
		}
		else {
			if (score[i] == 1) {
				total += num;
				//cout << "+ " << num << endl;
				num++;
			}
		}
		//cout << "total: " << total << endl;
		i++;
		
		if (i >= n) {
			break;
		}
		
	}
	cout << total << endl;
	return 0;
}