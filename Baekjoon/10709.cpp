#include <iostream>
#include <vector>
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	
	
	vector<vector<int>> later(h, vector<int>(w, -1));
	vector<int> inum;
	vector<int> jnum;
	/*
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << later[i][j] << " ";
		}
		cout << endl;
	}

	*/


	for (int i = 0; i < h; i++) {
		string str;
		cin >> str;

		for (int j = 0; j <w; j++) {

			if (str[j] == 'c') {
				int t = 1;
				for (int k = j + 1; k < w; k++) {
					later[i][k] = t;
					t++;
				}
				inum.push_back(i);
				jnum.push_back(j);
				
			}
		}
	}

	for (int i = 0; i < inum.size(); i++) {
		later[inum[i]][jnum[i]] = 0;
	}


	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			
			cout << later[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}