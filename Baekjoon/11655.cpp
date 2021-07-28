#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {

		if ((str[i] >= 65 && str[i] <= 90)) {
			

			str[i] += 13;

			
			if (str[i] > 90) {// ´ë¹®ÀÚ
				//int a = str[i] - 91;
				str[i] = str[i] - 91+65;
			}
			
		}



		if ((str[i] >= 97 && str[i] <= 122)) {

			if (str[i] >= 115) {
				str[i] = 97 + 13 - (122 - str[i])-1;
			}
			else {
				str[i] += 13;
				if (str[i] > 122) {
					str[i] = str[i] - 123 + 97;
				}
			}
			
		}
		
	}
	cout << str << endl;
	return 0;
}