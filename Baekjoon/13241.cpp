#include <iostream>
#include <string>
#include <cmath>
using namespace std;
long long int GCD(long long int a, long long int b)
{
    if (b == 0) {
        return a;
    }
    else {
        return GCD(b, a % b);

    }
}
long long int LCM(long long int a, long long int b)
{
	return a * b / GCD(a, b);
}


int main() {
    long long int a, b;
	cin >> a >> b;

    cout << LCM(a, b) << endl;
    return 0;

}
