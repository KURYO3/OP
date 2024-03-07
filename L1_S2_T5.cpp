#include <iostream>
using namespace std;

const int SIZE = 100;

class q_type{
private:
    int queue[SIZE];
    int head, tail; 

public:
    q_type() {
        head = tail = 0;
    }

    void q(int num) {
        if (((tail + 1) % SIZE) == head) {
            cout << "Черга переповнена.\n";
            return;
        }
        tail = (tail + 1) % SIZE;
        queue[tail] = num;
    }

    int deq() {
        if (head == tail) {
            cout << "Черга порожня.\n";
            return 0;
        }
        head = (head + 1) % SIZE;
        return queue[head];
    }
};

int main() {
    q_type queue;

    for (int i = 1; i <= 10; i++) {
        queue.q(i);
    }

    for (int i = 1; i <= 10; i++) {
        cout << queue.deq() << " ";
    }
    cout << endl;

    return 0;
}
