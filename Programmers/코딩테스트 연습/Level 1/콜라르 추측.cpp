#include <string>
#include <vector>

using namespace std;

int solution(int num2) {
    int answer = 0;
    long long int num = num2;
    if (num == 1) {
        answer = 0;
    }
    else {
        while (1) {
            if (num % 2 == 0) {
                num /= 2;
            }
            else {
                num *= 3;
                num++;
            }
            answer++;
            if (num == 1) {
                break;
            }
            else if (answer >= 499) {
                answer = -1;
                break;
            }
        }
    }
    return answer;
}