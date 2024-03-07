#include <iostream>
using namespace std;

int main() {
	double value;
	do {
		cout << "Введіть значення в метрах для перетворення у фути і дюйми, або введіть 0 для завершення:\n";
		cin >> value;
		if (value != 0) {
			cout << "В футах: " << value * 3.2808399 << "\n" << "В дюймах: " << value * 39.3700787 << "endl";
		}
	} while (value != 0);
	return 0;
}