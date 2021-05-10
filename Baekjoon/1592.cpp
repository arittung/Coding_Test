#include <iostream>
using namespace std;

int odd_move(int *arr, int l, int n, int turn) {  // �ð�������� l��
    while (1) {
        if (l == 0) {
            break;
        }
        l--;
        if ((turn + 1) < n) {
            turn++;
        }
        else {
            turn = 0;
        }
    }

    return turn;
}

int even_move(int* arr, int l, int n, int turn) { // �ݽð�������� l��
    while (1) {
        if (l == 0) {
            break;
        }
        l--;
        if ((turn - 1) >= 0) {
            turn--;
        }
        else {
            turn = n-1;
        }
        //cout << l << " " << turn << endl;
    }
    return turn;
}


int main() {
    int n, m, l, turn = 0;
	cin >> n >> m >> l;
    int* person = new int[n];
    for (int i = 1; i < n; i++) {
        person[i] = 0;
    }
    person[0] = 1;
    
    int sum = 0;
    
    while (1) {
        
        if (person[turn] % 2 == 0) {
            turn = even_move(person, l, n, turn);
            //cout << "�ݽð� -> " << endl;
        }
        else {
            turn = odd_move(person, l, n, turn);  
           // cout << "�ð� -> " << endl;
        }
        //cout << "����: "<<turn << endl;
        person[turn]++;
        sum++;
        if (person[turn] == m) {
            break;
        }

    }
    cout << sum << endl;
    
    return 0;
}