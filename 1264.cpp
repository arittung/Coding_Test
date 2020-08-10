#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);
		if (str == "#") {
			break;
		}
		int sum = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'a' || str[i] == 'A') {
				sum++;
			}
			else if (str[i] == 'e' || str[i] == 'E') {
				sum++;
			}
			else if (str[i] == 'i' || str[i] == 'I') {
				sum++;
			}
			else if (str[i] == 'o' || str[i] == 'O') {
				sum++;
			}
			else if (str[i] == 'u' || str[i] == 'U') {
				sum++;
			}
		}
		cout << sum << endl;
	
	}

	return 0;
}