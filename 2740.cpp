#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m;
	int** amatrix = new int* [n];
	

	for (int i = 0; i < n; i++) {
		amatrix[i] = new int[m];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> amatrix[i][j];
		}
	}

	cin >> m >> k;
	int** bmatrix = new int* [m];
	for (int i = 0; i < m; i++) {
		bmatrix[i] = new int[k];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> bmatrix[i][j];
		}
	}

	int** resmatrix = new int* [n];
	for (int i = 0; i < n; i++) {
		resmatrix[i] = new int[k];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			resmatrix[i][j] = 0;
			for (int s = 0; s < m; s++) {
				//cout << amatrix[i][s] << " * " << bmatrix[s][j] << " + ";
				resmatrix[i][j] += (amatrix[i][s] * bmatrix[s][j]);
				
			}
			//cout <<" = "<< resmatrix[i][j] << endl;
			cout << resmatrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}