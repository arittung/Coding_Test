#include <iostream>
#include <vector>
using namespace std;



unsigned long long int fibo_daynamic(long long int n, vector<unsigned long long int>& fibo_memo) {

	if (n == 1 || n == 0) {
		return n;
	}
	else if (fibo_memo[n] != 0) {
		return fibo_memo[n];
	}
	else {
		fibo_memo[n] = fibo_daynamic(n - 1, fibo_memo) + fibo_daynamic(n - 2, fibo_memo);

		//cout << fibo_memo[n] << endl;
		return fibo_memo[n];
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int p, q;
		cin >> p >> q;

		vector<unsigned long long int> fibo_memo;
		if (p > q) {
			vector<unsigned long long int> fibo_memo(p + 1, 0);
			fibo_daynamic(p, fibo_memo);

		}
		else {
			vector<unsigned long long int> fibo_memo(q + 1, 0);
			fibo_daynamic(q, fibo_memo);

		}
		
		

		fibo_memo[1] = 1;
		/*cout << "result :";
		for (int i = 0; i < fibo_memo.size(); i++) {
			cout << fibo_memo[i] << " ";
		}
		cout << endl;
		*/

		int pnum = fibo_memo[p];

		
		return 0;
	}

	
}