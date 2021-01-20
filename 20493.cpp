#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, t, x = 0, y = 0;
	cin >> n >> t;

	int* time = new int[n+1];
	string* dir = new string[n+1];

	for (int i = 0; i < n; i++) {
		cin >> time[i] >> dir[i];
	}

	for (int i = n; i > 0; i--) {
		dir[i] = dir[i - 1];
	}
	dir[0] = "init";
	time[n] = t - time[n - 1];

	for (int i = n-1; i >0 ; i--) {
		time[i] = time[i] - time[i - 1];
	}

	/*
	for (int i = 0; i < n + 1; i++) {
		cout << time[i] << " " << dir[i] << endl;
	}
	cout << endl;
	*/

	int check = 0;
	for (int i = 0; i < n+1; i++) {
		if (check == 0) {
			if (dir[i] == "init") {
				x += time[i];
			}
			else if (dir[i] == "right") {
				y -= time[i];
				check = 2;
			}
			else if (dir[i] == "left") {
				y += time[i];
				check = 3;
			}
		}
		else if (check == 1) {
			if (dir[i] == "right") {
				y += time[i];
				check = 3;
			}
			else if (dir[i] == "left") {
				y -= time[i];
				check = 2;
			}
		}
		else if (check == 2) {
			if (dir[i] == "right") {
				x -= time[i];
				check = 1;
			}
			else if (dir[i] == "left") {
				x += time[i];
				check = 0;
			}
		}
		else if (check == 3) {
			if (dir[i] == "right") {
				x += time[i];
				check = 0;
			}
			else if (dir[i] == "left") {
				x -= time[i];
				check = 1;
			}
		}

		//cout << x << ", " << y << endl;
	}

	cout << x << " " << y << endl;
	return 0;
}