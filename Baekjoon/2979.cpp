#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;


	vector<int> truck(101, 0);

	for (int i = 0; i < 3; i++) {
		int n, t;
		cin >> n >> t;
		
		for (int j = n; j < t; j++) {
			truck[j]++;
		}
	}

	int price = 0;

	for (int i = 0; i < truck.size(); i++) {
		//cout << truck[i] << " ";
		if (truck[i] == 1) {
			price += a;
		}
		else if (truck[i] == 2) {
			price += (b*2);
		}
		else if (truck[i] == 3) {
			price += (c*3);
		}
	}

	
	cout << price << endl;
	return 0;
}