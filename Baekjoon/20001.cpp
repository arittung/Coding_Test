#include <iostream>
#include <string>
using namespace std;

int main() {
	string start;
	getline(cin, start);
	int problem = 0;
	if (start == "������ ����� ����") {
		while (1) {
			string str;
			getline(cin, str);
			
			if (str == "������ ����� ��") {
				break;
			}
			else if (str == "������") {
				if (problem <= 0) {
					problem += 2;
				}
				else {
					problem--;
				}
			}
			else if (str == "����") {
				problem++;
			}
			//cout << "problem : " << problem << endl;
		}
		if (problem != 0) {
			cout << "����" << endl;
		}
		else {
			cout << "�������� �����" << endl;
		}
	}
	return 0;
}