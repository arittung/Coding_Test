#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	int sum = 0;
	vector<vector<int>> width(500, vector<int>(500, 0));


	int max_x=0, max_y = 0;
	
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		if (x2 > max_x) {
			max_x = x2;
		}

		if (y2 > max_y) {
			max_y = y2;
		}


		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				width[j][k] = 1;
			}
		}
	}

	//cout << max_x << " "<< max_y << endl;

	for (int j = 0; j <= max_x; j++) {
		for (int k = 0; k <= max_y; k++) {
			//cout << width[j][k] << " ";
			if (width[j][k] == 1) {
				sum++;
			}
		}
		//cout << endl;
	}

	cout << sum << endl;
	
	return 0;
}