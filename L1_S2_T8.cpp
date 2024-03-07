#include <iostream>
#include <cmath>
using namespace std;

int myroot(int x) {
    return sqrt(x);
}

long myroot(long x) {
    return sqrt(x);
}

double myroot(double x) {
    return sqrt(x);
}

int main() {
    int a = 16;
    long b = 1000000;
    double c = 2.25;
    cout << "Квадратний корінь " << a << " = " << myroot(a) << endl;
    cout << "Квадратний корінь " << b << " = " << myroot(b) << endl;
    cout << "Квадратний корінь " << c << " = " << myroot(c) << endl;
    return 0;
}
