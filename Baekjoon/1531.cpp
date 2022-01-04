#include <iostream>
using namespace std;

int main() {
    int pic[101][101] = { 0,0 };
    int n, m;
    cin >> n >> m;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int j = a; j <= c; j++) {
            for (int k = b; k <= d; k++) {
                
                pic[j][k]++;
                
                if (pic[j][k] == m+1) {
                    res++;
                }
                
            }
        }
    }
    cout << res << endl;
    return 0;
}