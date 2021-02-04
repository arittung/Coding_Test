#include <iostream>
using namespace std;

int main() {
	int price[3], weight[3];
	double cost[3];
	for (int i = 0; i < 3; i++) {
		cin >> price[i] >> weight[i];
	}
	for (int i = 0; i < 3; i++) {
		int snack = price[i] * 10;
		if (snack >= 5000) {
			snack -= 500;
		}
		
		cost[i] = (weight[i] * 10) / (double)snack;
		//cout << weight[i] * 10 <<" / "<<snack << " = " << cost[i] << endl;
	}
	double max = cost[0];
	int maxi = 0;
	for (int i = 1; i < 3; i++) {
		if (max < cost[i]) {
			max = cost[i];
			maxi = i;
		}
	}

	switch (maxi) {
	case 0:
		cout << "S" << endl;
		break;
	case 1:
		cout << "N" << endl;
		break;
	case 2:
		cout << "U" << endl;
		break;
	}

	return 0;
}