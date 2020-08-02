#include<iostream>
using namespace std;

int main() {
	string word;
	cin >> word;
	char alpha[26];
	int alpha_num[26] = { 0,0 };
	for (int i = 0; i < 26; i++) {
		alpha[i] = 'a' + i;
	}
	for (int i = 0; i < word.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if (alpha[j] == word[i]) {
				alpha_num[j]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha_num[i] << " ";
	}
	cout << endl;
	
	return 0;
}