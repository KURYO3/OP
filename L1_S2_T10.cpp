#include <iostream>
using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

char min(char a, char b) {
    return (a < b) ? a : b;
}

int main() {
    int int1 = 10, int2 = 20;
    double double1 = 3.14, double2 = 2.71;
    char char1 = 'A', char2 = 'B';

    cout << "Мінімальне з " << int1 << " та " << int2 << " = " << min(int1, int2) << endl;
    cout << "Мінімальне з " << double1 << " та " << double2 << " = " << min(double1, double2) << endl;
    cout << "Мінімальне з " << char1 << " та " << char2 << " = " << min(char1, char2) << endl;

    return 0;
}
