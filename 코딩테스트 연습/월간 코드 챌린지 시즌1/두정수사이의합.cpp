#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long minus, plus = a + b;
    long long tmp;
    if (a > b) {
        minus = a - b;

        tmp = (b + minus / 2);
    }
    else if (a == b) {
        return a;
    }
    else {
        minus = b - a;
        tmp = (a + minus / 2);
    }

    if (minus % 2 == 0) {
        answer = plus * (minus / 2) + tmp;
    }
    else {
        answer = plus * (minus / 2 + 1);
    }


    return answer;
}