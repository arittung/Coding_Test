#include <iostream>
#include <string.h>
using namespace std;

int change(char alpha) {
	int num = 0;
	switch (alpha) {
	case 'A':
		num = 3;
		break;
	case 'B':
		num = 2;
		break;
	case 'C':
		num = 1;
		break;
	case 'D':
		num = 2;
		break;
	case 'E':
		num = 3;
		break;
	case 'F':
		num = 3;
		break;
	case 'G':
		num = 3;
		break;
	case 'H':
		num = 3;
		break;
	case 'I':
		num = 1;
		break;
	case 'J':
		num = 1;
		break;
	case 'K':
		num = 3;
		break;
	case 'L':
		num = 1;
		break;
	case 'M':
		num = 3;
		break;
	case 'N':
		num = 3;
		break;
	case 'O':
		num = 1;
		break;
	case 'P':
		num = 2;
		break;
	case 'Q':
		num = 2;
		break;
	case 'R':
		num = 2;
		break;
	case 'S':
		num = 1;
		break;
	case 'T':
		num = 2;
		break;
	case 'U':
		num = 1;
		break;
	case 'V':
		num = 1;
		break;
	case 'W':
		num = 2;
		break;
	case 'X':
		num = 2;
		break;
	case 'Y':
		num = 2;
		break;
	case 'Z':
		num = 1;
		break;
	}
	return num;
}

int main() {
	string k;
	cin >> k;
	int n = k.size();
	int* changek = new int[n];
	for (int i = 0; i < k.size(); i++) {
		int num =  change(k[i]);
		changek[i] = num;
	}
	int result;
	
	while (1) {
		if (n % 2 == 0) {
			n = n / 2;
			int* newk = new int[n];
			int i = 0, j = 0;
			while (1) {
				
				int num = changek[i] + changek[i + 1];
				newk[j] = num % 10;
				//cout << j << ": " << newk[j] << endl;
				i += 2;
				j++;
				if (j >= n) {
					break;
				}
			}
			
			for (int i = 0; i < n; i++) {
				changek[i] = newk[i];
			}
			result = newk[0];
		}
		else {
			
			n = n / 2 + 1;
			int* newk = new int[n];
			int i = 0, j = 0;
			while (1) {
				
				int num = changek[i] + changek[i + 1];
				newk[j] = num % 10;
				//cout << "i: " << i << ", j: " << j << "-> " << newk[j] << endl;
				i += 2;
				j++;
				
				if (j >= n) {
					newk[j-1] = changek[i-2];
					
					break;
				}
			}
			
			
			for (int i = 0; i < n; i++) {
				changek[i] = newk[i];
			}
			result = newk[0];

		}
		
		//cout << endl;
		if (n == 1) {
			break;
		}
	}
	if (result % 2 == 0) {
		cout << "You're the winner?\n";
	}
	else {
		cout << "I'm a winner!\n";
	}
	return 0;
}