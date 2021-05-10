#include <iostream>
#include <string>
using namespace std;

int main() {
	string start;
	getline(cin, start);
	int problem = 0;
	if (start == "고무오리 디버깅 시작") {
		while (1) {
			string str;
			getline(cin, str);
			
			if (str == "고무오리 디버깅 끝") {
				break;
			}
			else if (str == "고무오리") {
				if (problem <= 0) {
					problem += 2;
				}
				else {
					problem--;
				}
			}
			else if (str == "문제") {
				problem++;
			}
			//cout << "problem : " << problem << endl;
		}
		if (problem != 0) {
			cout << "힝구" << endl;
		}
		else {
			cout << "고무오리야 사랑해" << endl;
		}
	}
	return 0;
}