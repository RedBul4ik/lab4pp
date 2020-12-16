#include <iostream>;
#include "222.h";
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	string x;
	char s[100], word[100], copy[100], a;
	cout << "¬ведите строку: ";
	cin.getline(s, 100);
	cout << "¬ведите слово: ";
	cin.getline(word, 100);
	strcpy_s(copy, s);
	while (x != "Exit") {
		cin >> x;
		if (x == "WordsCount") {
			cout << WordsCount(copy) << endl;
			strcpy_s(copy, s);
		}
		if (x == "Words") {
			cout << Words(copy) << endl;
			strcpy_s(copy, s);
		}
		if (x == "Word") {
			cout << Word(copy) << endl;
			strcpy_s(copy, s);
		}
		if (x == "DelWords") {
			cout << "¬ведите букву: " << endl;
			cin >> a;
			DelWords(copy, a);
			cout << copy << endl;
			strcpy_s(copy, s);
		}
		if (x == "DelShortWords") {
			DelShortWords(copy);
			cout << copy << endl;
			strcpy_s(copy, s);
		}
		if (x == "WordCount") {
			cout << WordCount(copy, word) << endl;
			strcpy_s(copy, s);
		}
		if (x == "SingleWords") {
			SingleWords(copy);
			strcpy_s(copy, s);
		}
		if (x == "ABCOrder") {
			ABCOrder(s);
			strcpy_s(copy, s);
		}
		if (x == "SortByLength") {
			SortByLength(copy);
			strcpy_s(copy, s);
		}
		if (x == "Position") {
			cout << SortByLength(copy, word);
			strcpy_s(copy, s);
		}
	}
		return 0;
}