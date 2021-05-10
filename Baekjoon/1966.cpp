#include <iostream>
using namespace std;

#define MAX_QUEUE_SIZE 1000

inline void error(const char* str) {
    std::cerr << str << "\n"; // 에러의 경우는 std::cerr로 출력합니다.
    exit(1);
};

class CircularQueue {

public:
    int    front;
    int    rear;
    int    data[MAX_QUEUE_SIZE];
    CircularQueue() { front = rear = 0; }
    ~CircularQueue() {}
    bool isEmpty() { return front == rear; }
    bool isFull() { return (rear + 1) % MAX_QUEUE_SIZE == front; } 
    void enqueue(int val) { 
        if (isFull()) {
            error(" Error: 큐가 포화상태입니다\n");
        }
        else {
            rear = (rear + 1) % MAX_QUEUE_SIZE;
            data[rear] = val;
        }
    }
    int dequeue() { 
        if (isEmpty()) {
            error(" Error: 큐가 공백상태입니다\n");
        }
        else {
            front = (front + 1) % MAX_QUEUE_SIZE;
            return data[front];
        }
    }
    int peek() {
        if (isEmpty()) {
            error(" Error: 큐가 공백상태입니다\n");
        }
        else {
            return data[(front + 1) % MAX_QUEUE_SIZE];
        }
    }

    int find() {
        
        int maxi = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
        //cout << "front: " << front << ", rear: " << rear <<", maxi: "<< maxi<< endl;
        int i, max = data[front+1], check = front+1;
        for (i = front+1; i <= maxi; i++) {
            if (max < data[i]) {
                max = data[i];
                check = i;
            }
        }
        //cout << "찾으려는 위치: " << check << ", 찾으려는 수: " << data[check] << endl;
        return (check-front-1);
    }
    void display() {
        //std::cout << "Queue : ";
        int maxi = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
        for (int i = front + 1; i <= maxi; i++) {
            std::cout << data[i % MAX_QUEUE_SIZE] << " ";
        }
        std::cout << "\n";
    }
};


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        CircularQueue file;
        int sum =0;
        for (int j = 0; j < n; j++) {
            int info;
            cin >> info;
            
            file.enqueue(info);
        }
        
        while (1) {
            int findplace = file.find();
            //cout << "findplace: " << findplace << endl;
            for (int j = 0; j < findplace; j++) {
                int dis = file.dequeue();
                
                if (m > 0) {
                    m--;
                }
                else {
                    m = n-1;
                }
                file.enqueue(dis);
                //cout << "m 변화: " << m << endl;
                //file.display();
            }
           // cout << file.data[m + file.front] << endl;
            sum++;
            //file.display();
            if (file.data[file.front] == file.data[m + file.front] && m == 0) {
                //cout << "sum: " << sum << endl;
                break;
            }
            int filenum = file.dequeue();
            m--;
            n--;
            
            //cout << "뺀 수: " << filenum << endl;
            //cout << "sum: " << sum << endl;

        }
        cout << sum << endl;

    }
	return 0;
}