#include <iostream>
#define MAX_myQueue_SIZE 10000
using namespace std;

class myQueue {
protected:
    int    front_p; 
    int    rear_p; 
    int    data[MAX_myQueue_SIZE];
public:
    myQueue() { front_p = rear_p = 0; }

    ~myQueue() {}

    bool empty() { 
        return front_p == rear_p;
    }
    
    void push(int val) {
        rear_p = (rear_p + 1) % MAX_myQueue_SIZE;
        data[rear_p] = val;
    }

    int pop() { 
        if (empty()) {
            return -1;
        }
        else {
            
            front_p = (front_p + 1) % MAX_myQueue_SIZE;
            return data[front_p];
        }
    }

    int size() {
        return rear_p- front_p;
    }

    int front() {
        if (empty()) {
            return -1;
        }
        else {
            return data[front_p +1];
        }
    }
    int back() {
        if (empty()) {
            return -1;
        }
        else {
            return data[rear_p];
        }
     }
    
};


int main() {
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string act;
        cin >> act;
        if (act == "push") {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (act == "front") {
            cout << q.front() << endl;
        }
        else if (act == "back") {
            cout << q.back() << endl;
        }
        else if (act == "pop") {
            cout << q.pop() << endl;
        }
        else if (act == "size") {
            cout << q.size() << endl;
        }
        else if (act == "empty") {
            cout << q.empty() << endl;
        }
        
    }
    return 0;
}