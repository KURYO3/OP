#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

class stopwatch {
private:
    clock_t start_time;
    clock_t stop_time;
    bool running;

public:
    stopwatch() : start_time(0), stop_time(0), running(false) {}

    void start() {
        if (!running) {
            start_time = clock();
            running = true;
            cout << "Секундомір запущено." << endl;
        } else {
            cout << "Секундомір вже запущено." << endl;
        }
    }

    void stop() {
        if (running) {
            stop_time = clock();
            running = false;
            cout << "Секундомір зупинено." << endl;
        } else {
            cout << "Секундомір не запущено." << endl;
        }
    }

    void show() {
        if (!running) {
            cout << "Пройшло часу: " << double(stop_time - start_time) / CLOCKS_PER_SEC << " секунд." << endl;
        } else {
            cout << "Секундомір ще працює." << endl;
        }
    }

    ~stopwatch() {
        if (running) {
            stop();
        }
        cout << "Секундомір знищено." << endl;
    }
};

int main() {
    stopwatch watch;

    double sum = 0;
    watch.start();
    for (volatile int i = 0; i < 1000000; ++i) {
        sum += (i * i + pow(i, i) / 5) * sqrt(i * 1564) + cos(i + i * i) / 98;
    }
    watch.stop();
    watch.show();
    return 0;
}
