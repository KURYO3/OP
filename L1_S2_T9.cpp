#include <iostream>
#include <cstdlib>
using namespace std;

double atof(int x) {
    return x * 1.0;
}

int main() {
    const char *str = "3.14";
    double result = atof(str);
    cout << "Результат: " << result << endl;
    return 0;
}
