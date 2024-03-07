#include <iostream>
using namespace std;

class mybox {
private:
    double length;
    double width;
    double height;
    double volume;

public:
    mybox(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        volume = length * width * height;
    }

    void vol() {
        cout << "Об'єм паралелепіпеда: " << volume << endl;
    }
};

int main() {
    mybox box1(3.0, 4.0, 5.0);
    box1.vol();
    return 0;
}
