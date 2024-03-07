#include <iostream>
//#include <iomanip>
using namespace std;

int main () {
	double emp_hours[3];
	double salary[3];
	for (int i = 0; i < 3; i++) {
	    cout << "Введіть кількість відпрацьованих годин працівника " << i+1 << ":\n";
	    cin >> emp_hours[i];
	    if (emp_hours[i] < 0) {
	    	cout << "Кількість відпрацьованих годин не може бути від'ємною.";
	    	return 1;
	    }

	    cout << "Введіть оплату за годину працівника " << i+1 << ":\n";
	    cin >> salary[i];
	    if (salary[i] < 0) {
	    	cout << "Оплата за годину не може бути від'ємною.";
	    	return 2;
	    }
    }
    double sum = 0;
    for (int j = 0; j < 3; j++) {
    	sum += emp_hours[j] * salary[j];
    }
    //cout << "Сумарна зарплатня всіх працівників:\n" << fixed << setprecision(2) << sum << endl;
    cout << "Сумарна зарплатня всіх працівників:\n" << sum;
	return 0;
}