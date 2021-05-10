#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check(string title, vector<string> book) {
	for (int i = 0; i < book.size(); i++) {
		if (book[i] == title) {
			return i;
		}
	}
	return -1;
}

void swap(int *a,int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(string *a, string*b) {
	string tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int n;
	cin >> n;
	vector<string> book;
	vector<int> count;

	for (int i = 0; i < n; i++) {
		string title;
		cin >> title;
		if (check(title, book) == -1) {
			book.push_back(title);
			count.push_back(1);
		}
		else {
			count[check(title, book)]++;
		}
	}

	int size = book.size();
	/*
	cout << "-------init-----------" << endl;
	for (int i = 0; i < size; i++) {
		cout << book[i] << " " << count[i] << endl;
	}*/

	for (int i = 0; i < size -1; i++) {
		for (int j = i; j < size; j++) {
			if (count[i] < count[j]) {
				swap(&book[i], &book[j]);
				swap(&count[i], &count[j]);
			
			}
		}
	}
	/*
	cout << "-------swap-----------" << endl;
	for (int i = 0; i < size; i++) {
		cout << book[i] << " " << count[i] << endl;
	}*/

	int num = size;
	if (count[0] == count[1]) {
		for (int i = 1; i < size; i++) {
			if (count[0] != count[i]) {
				num = i;
				//cout << "num: " << num << endl;
				break;
			}
		}
		sort(book.begin(), book.begin() + num);
	}
	
	/*
	cout << "---------result---------" << endl;
	for (int i = 0; i < num; i++) {
		cout << book[i] << " " ;
	}
	cout << endl;
	cout << "------------------" << endl;
	*/
	cout << book[0] << endl;

	return 0;
}