#include <iostream>
#include <cstring>
using namespace std;

void rev_str(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void rev_str(const char* input_str, char* result_str) {
    strcpy(result_str, input_str);
    rev_str(result_str);
}

int main() {
    char str1[100];
    char str2[100];

    cout << "Введіть рядок 1: ";
    cin.getline(str1, 100);
    cout << "Введіть рядок 2: ";
    cin.getline(str2, 100);

    rev_str(str1);
    cout << "Результат для рядка 1: " << str1 << endl;
    rev_str(str2, str2);
    cout << "Результат для рядка 2: " << str2 << endl;
    return 0;
}
