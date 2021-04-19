#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i;
    for (i = 0; i < phone_number.size() - 4; i++) {
        answer += "*";
    }
    for (int j = i; j < phone_number.size(); j++) {
        answer += phone_number[j];
    }
    return answer;
}