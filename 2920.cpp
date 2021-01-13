#include <iostream>
using namespace std;

int main() {
	int music[8];
	for (int i = 0; i < 8; i++) {
		cin >> music[i];
	}
	int dif, check = -1;
	dif = music[1] - music[0];
	for (int i = 7; i > 0; i--) {
		if (music[i] - music[i - 1] != dif) {
			check = 0;	// mix
			break;
		}
	}
	if (music[0] < music[1] && check == -1) {	// ascending
		check = 1;
	}
	else if(music[0] > music[1] && check == -1){
		check = 2;
	}
	switch (check) {
	case 0:
		cout << "mixed" << endl;
		break;
	case 1:
		cout << "ascending" << endl;
		break;
	case 2:
		cout << "descending" << endl;
		break;
	}
	return 0;
}