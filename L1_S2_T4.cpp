#include <iostream>
#include <string>
using namespace std;

class card{
private:
	string name;
	string book;
	int numbers;

public:
	card(string author, string book_name, int copies_number){
		name = author;
		book = book_name;
		numbers = copies_number;
	}

	void store(){
		cout << "Введіть ім'я автора: ";
		string first_name, second_name;
		cin >> first_name >> second_name;
		name = first_name + " " + second_name;
		cout << "Введіть назву книги (слова розділяйте за допомогою '_'): ";
		char bn[100];
		cin >> bn;
		for (int i = 0; i < 100; i++) {
			if(bn[i] == '_')
				bn[i] = ' ';
		}
		book = bn;
		cout << "Введіть число проданих копій: ";
		cin >> numbers;
	}

	void show(){
		cout << "Ім'я автора: " << name << "\nНазва книги: " << book << "\nЧисло проданих копій: " << numbers << endl;
	}
};

int main() {
	card Book("Іван Котляревський", "Енеїда", 1000000);
	Book.show();
	Book.store();
	Book.show();
	return 0;
}
