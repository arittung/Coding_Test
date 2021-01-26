#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string word;
	cin >> word;
	int j = 0;
	for (int i = 0; i < word.size(); i++) {
		cout << word[i];
		j++;
		if (j == 10) {
			cout << endl;
			j = 0;
		}
	}
	cout << endl;
	return 0;
}