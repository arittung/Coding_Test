#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    int i = 0;
    while (1) {
        budget -= d[i];
        if (budget == 0) {
            i++;
            break;
        }
        else if (budget < 0) {
            break;
        }
        i++;
        if (i > d.size()) {
            i--;
            break;
        }
    }
    answer = i;

    return answer;
}