#include <iostream>
#include <ctime>
using namespace std;

class time_and_date {
private:
    tm current_time;

public:
    time_and_date() {
        time_t now = time(0);
        current_time = *localtime(&now);
    }

    void show() {
        cout << "Поточний час і дата: ";
        cout << current_time.tm_hour << ":" << current_time.tm_min << ":" << current_time.tm_sec;
        cout << " " << current_time.tm_mday << "." << (current_time.tm_mon + 1) << "." << (current_time.tm_year + 1900);
        cout << endl;
    }
};

int main() {
    time_and_date obj;
    obj.show();
    return 0;
}
