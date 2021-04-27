#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> score = { 0,0,0 };
    vector<int> person = { 1,2,3 };
    vector<int> one = { 1,2,3,4,5 };
    vector<int> two = { 2,1,2,3,2,4,2,5 };
    vector<int> three = { 3,3,1,1,2,2,4,4,5,5 };
    int j = 0, k = 0, s = 0;
    for (int i = 0; i < answers.size(); i++) {

        if (answers[i] == one[j]) {
            score[0]++;
        }
        if (answers[i] == two[k]) {
            score[1]++;
        }
        if (answers[i] == three[s]) {
            score[2]++;
        }
        j++;
        k++;
        s++;
        if (j >= one.size()) {
            j = 0;
        }
        if (k >= two.size()) {
            k = 0;
        }
        if (s == three.size()) {
            s = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (score[i] < score[j]) {
                int tmp = score[i];
                score[i] = score[j];
                score[j] = tmp;
                int tmp2 = person[i];
                person[i] = person[j];
                person[j] = tmp2;
            }
        }
    }
    int i = 0;
    answer.push_back(person[i]);
    i++;
    while (1) {
        if (i > 2) {
            break;
        }

        if (score[i] == score[0]) {
            answer.push_back(person[i]);
        }
        i++;
    }
    sort(answer.begin(), answer.end());
    return answer;
}