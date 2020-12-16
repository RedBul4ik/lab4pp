#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InputTwoArray(int a[10][10], int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int l = 0; l < M; l++) {
			cin >> a[i][l];
		}
	}
}

void RandomMatrix(int a[10][10], int N, int M, int b, int c) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		for (int l = 0; l < M; l++) {
			a[i][l] = b + rand() % (c - b + 1);
		}
	}
}

void PrintMatrix(int a[10][10], int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int l = 0; l < M; l++) {
			cout << a[i][l] << ' ';
		}
		cout << endl;
	}
}
int SumLine(int a[10][10], int N, int M, int k) {
	int sum = 0;
	for (int i = 0; i < M; i++) {
		sum = sum + a[k][i];
	}
	return sum;
}
int MaxMatrix(int a[10][10], int N, int M, int& maxi, int& maxj) {
	int max = a[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (a[i][j] >= max) {
				maxi = i;
				maxj = j;
				max = a[i][j];
			}
		}
	}
	return max;
}
void SortLine(int a[10][10], int N, int M, int k) {
	int i = k;
	int l = 0;
	for (int j = M - 1; j > 0; j--) {
		if (j == 0) {
			break;
		}
		if (a[i][j] < a[i][j - 1]) {
			l = a[i][j - 1];
			a[i][j - 1] = a[i][j];
			a[i][j] = l;
			j = M;
		}
	}
}
int SortedLine(int a[10][10], int N, int M) {
	int stroka = -1;
	for (int i = 0; i < N; i++) {
		int k = 1;
		for (int j = M - 1; j > 0; j--) {
			if (a[i][j] < a[i][j - 1]) {
				k++;
			}
			if (k == M) {
				stroka = i;
			}
		}
	}
	return stroka;
}
int ZeroColumn(int a[10][10], int N, int M) {
	int stolbec = -1;
	for (int j = 0; j < M; j++) {
		for (int i = 0; i < N; i++) {
			if (a[i][j] == a[i + 1][j] && a[i][j] == 0) {
				stolbec = j;
			}
		}
	}
	return stolbec;
}