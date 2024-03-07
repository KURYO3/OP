#include <iostream>
#include <cstring>
using namespace std;

class strtype {
    char *p;
    int len;
public:
    strtype(const char *ptr);
    ~strtype();
    void show();
};

strtype::strtype(const char *ptr) {
    len = strlen(ptr);
    p = new char[len+1];
    strcpy(p, ptr);
}

strtype::~strtype() {
    cout << "Freeing p\n";
    delete [] p;
}

void strtype::show() {
    cout << p << " - length: " << len << endl;
}

int main() {
   strtype s1("This is a test.");
   s1.show();
   return 0;
}
