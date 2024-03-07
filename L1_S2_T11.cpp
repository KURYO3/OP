#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;

void sleep(int seconds) {
    cout << "Зупинка на " << seconds << " секунд(и)...\n";
    this_thread::sleep_for(chrono::seconds(seconds));
}

void sleep(const string& seconds_str) {
    int seconds = stoi(seconds_str);
    sleep(seconds);
}

int main() {
    sleep(5);
    sleep("3");
    return 0;
}
