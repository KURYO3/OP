#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;

    cout << "Введіть число та показник степеня цььго числа: ";
    cin >> a >> b;

    cout << "Результат: " << pow(a, b) << endl;
    return 0;
}
