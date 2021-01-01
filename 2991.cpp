#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int p, m, n;
	cin >> p >> m >> n;

	int check[1000] = { 0,0 };

	int i = 0;
	int inita = a, initc = c;
	int barka = 0, barkc = 0;
	while (1) {
		if (i == 1000) {
			break;
		}
		
		if (i < a && i >= barka) {
			if (check[i] == 1) {
				check[i] = 2;
			}
			else {
				check[i] = 1;
			}
			
		}
		if (i < c && i >= barkc ) {
			if (check[i] == 1) {
				check[i] = 2;
			}
			else {
				check[i] = 1;
			}
		}
		if (i == a){
			barka += (b+inita);
			a += (b+inita);
		}
		if (i == c) {
			barkc +=(d+initc);
			c += (initc+d);
		}
		//cout << barka << ", " << a << ", " << barkc << ", " << c << "->" << i << ": " <<check[i] <<endl;
		i++;
	}
	
	cout << check[p-1] << '\n'<< check[m-1] << '\n' << check[n-1] << endl;
	return 0;
	
}