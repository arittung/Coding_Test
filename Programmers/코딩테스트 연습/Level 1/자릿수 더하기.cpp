#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string num = to_string(n);
    for (int i = 0; i < num.size(); i++) {
        answer += (int(num[i]) - 48);
    }

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    //cout << "Hello Cpp" << endl;

    return answer;
}