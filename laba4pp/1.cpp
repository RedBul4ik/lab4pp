#include <iostream>
#include "123.h"
using namespace std;

/*int main() {
	int a[10][10], N, M;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	InputTwoArray(a, N, M);
	PrintMatrix(a, N, M);
	return 0;
}*/
/*int main() {
	int a[10][10], N, M, b, c;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	cout << "¬ведите начало отрезка: ";
	cin >> b;
	cout << "¬ведите конец отрезка: ";
	cin >> c;
	RandomMatrix(a, N, M, b, c);
	PrintMatrix(a, N, M);
	return 0;
}*/
/*int main() {
	int a[10][10], N, M;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	PrintMatrix(a, N, M);
	return 0;
}*/
/*int main() {
	int a[10][10], N, M, k;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	cout << "¬ведите номер строки: ";
	cin >> k;
	while (k >= N || k < 0) {
			cout << "“акой строки нет, повторите ввод: ";
			cin >> k;
		}
	InputTwoArray(a, N, M);
	cout << SumLine(a, N, M, k);
	return 0;
}*/
/*int main() {
	int a[10][10], N, M, maxi, maxj;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	InputTwoArray(a, N, M);
	cout << MaxMatrix(a, N, M, maxi, maxj) << " - максимальный элемент" << endl;
	cout << maxi << " строка, " << maxj << " столбец";
	return 0;
}*/
/*int main() {
	int a[10][10], N, M, k;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	cout << "¬ведите номер строки: ";
	cin >> k;
	while (k >= N || k < 0) {
			cout << "“акой строки нет, повторите ввод: ";
			cin >> k;
	}
	InputTwoArray(a, N, M);
	SortLine(a, N, M, k);
	PrintMatrix(a, N, M);
	return 0;
}*/
/*int main() {
	int a[10][10], N, M;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	InputTwoArray(a, N, M);
	cout << SortedLine(a, N, M) << " строка";
	return 0;
}*/
/*int main() {
	int a[10][10], N, M;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите кол-во строк матрицы: ";
	cin >> N;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> M;
	InputTwoArray(a, N, M);
	cout << ZeroColumn(a, N, M) << " столбец";
	return 0;
}*/