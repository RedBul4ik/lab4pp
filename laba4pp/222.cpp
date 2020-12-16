#include <iostream>
#include <string.h>

void deleteLetter(char* str, int k) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (i == k) {
			for (int j = i; true; j++) {
				str[j] = str[j + 1];
				if (str[j] == '\0') break;
			}
		}
	}
}

void NormalizeString(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0' || i == 0)) || str[i] == ',' || str[i] == '.') {
			deleteLetter(str, i);
			i--;
		}
	}
}
int FindWord(char* s, char* word) {
	int i = 0;
	while (s[i] != '\0') {
		bool b = true;
		int p = 0;
		while (s[i + p] != ' ') {
			if (s[i + p] != word[p]) b = false;
			p++;
		}
		if (b) return i;
		i += ++p;
	}
	return -1;
}

int WordsCount(char* s) {
	int i = 1, c = 0;
	while (s[i] != '\0') {
		if (s[i] == ' ' && s[i - 1] != ' ') c++;
		i++;
	}
	return c + 1;
}
char* Words(char* s) {
	int i = 1, c = 0;
	NormalizeString(s);
	while (s[i] != '\0') {
		if (s[i] == ' ') s[i] = '/';
		i++;
	}
	return s;
}
char* Word(char* s) {
	int i = 0, j = 0, max = 0, i_s = 0;
	NormalizeString(s);
	while (s[i] != '\0') {
		if ((s[i] == ' ' || s[i + 1] == '\0')) {
			if (s[i + 1] == '\0') j++;
			if (j > max) {
				max = j;
				i_s = i - j;
			}
			j = -1;
		}
		j++;
		i++;
	}
	char* res = new char[max + 1];
	for (int i = 0; i < max; i++) {
		res[i] = s[i_s + i];
	}
	res[max] = '\0';
	return res;
}
void DelWords(char* s, char ch) {
	int i = 0, j = 0;
	NormalizeString(s);
	for (int i = 0; true; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			if (s[i - 1] == ch) {
				for (int k = i - 1; k >= i - j; k--) {
					deleteLetter(s, k);
				}
				i -= j;
			}
			j = 0;
		}
		if (s[i] == '\0') break;
		j++;
	}
	NormalizeString(s);
}
void DelShortWords(char* s) {
	NormalizeString(s);
	for (int i = 0; true; i++) {
		if ((s[i + 1] == ' ' || s[i + 1] == '\0') && (i == 0 || s[i - 1] == ' ')) {
			deleteLetter(s, i);
			if (s[i] != '\0') {
				deleteLetter(s, i);
				i -= 2;
			}
		}
		if (s[i] == '\0') break;
	}
}
int WordCount(char* s, char* word) {
	int i = 0, j = 0, c = 0;
	NormalizeString(s);
	bool da = true;
	for (int i = 0; true; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			if (da) c++;
			j = -1;
			da = true;
		}
		else if (s[i] != word[j]) da = false;
		if (s[i] == '\0') break;
		j++;
	}
	return c;
}

void SingleWords(char* s) {
	int j = 0;
	NormalizeString(s);
	char word[100];
	for (int i = 0; true; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			word[j] = '\0';
			if (WordCount(s, word) == 1) std::cout << word << ' ';
			j = -1;
		}
		else word[j] = s[i];
		if (s[i] == '\0') break;
		j++;
	}
}
char* getWord(char* s, int k) {
	int a = 0, j = 0;
	NormalizeString(s);
	char word[100];
	for (int i = 0; true; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			a++;
			word[j] = '\0';
			if (a == k) return word;
		}
		else word[j] == s[i];
		if (s[i] == '\0') break;
		j++;
	}
}

char** split(char* s) {
	NormalizeString(s);
	char** res = new char* [WordsCount(s)];
	char word[100];
	int j = 0, a = 0;
	for (int i = 0; true; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			word[j] = '\0';
			res[a] = new char[j + 1];
			strcpy_s(res[a], j + 1, word);
			a++;
			j = -1;
		}
		else word[j] = s[i];
		j++;
		if (s[i] == '\0') break;
	}
	return res;
}
bool less(char* w1, char* w2) {
	int len1 = strlen(w1);
	int len2 = strlen(w2);
	int len;
	if (len1 > len2) len = len1;
	else len = len2;
	for (int i = 0; i < len; i++) {
		if (w1[i] == '\0' && w2[i] != '\0') return true;
		if (w2[i] == '\0' && w1[i] != '\0') return false;
		if (tolower(w1[i]) > tolower(w2[i])) return false;
		else if (tolower(w1[i]) < tolower(w2[i])) return true;
	}
	return true;
}

void ABCOrder(char* s) {
	int j = 0;
	NormalizeString(s);
	char** words = split(s);
	for (int i = 1; i < WordsCount(s); i++) {
		if (!less(words[i - 1], words[i])) {
			std::swap(words[i], words[i - 1]);
			if (i > 1) i -= 2;
		}
	}
	for (int i = 0; i < WordsCount(s); i++) {
		std::cout << words[i] << " ";
	}
}
void SortByLength(char* s) {
	NormalizeString(s);
	char** words = split(s);
	for (int i = 1; i < WordsCount(s); i++) {
		if (strlen(words[i]) < strlen(words[i - 1])) {
			std::swap(words[i], words[i - 1]);
			if (i > 1) i -= 2;
		}
	}
	for (int i = 0; i < WordsCount(s); i++) {
		std::cout << words[i] << " ";
	}
}
int SortByLength(char* s, char* word) {
	int k = -1, p = 0, j = 0;
	NormalizeString(s);
	for (int i = 0; true; i++) {
		for (int l = i;!(s[l] == ' ' || s[l] == '\0'); l++) {
			if (s[l] == word[j]) {
				p++;
				j++;
			}
			else {
				p = 0;
				for (i; !(s[i] == ' ' || s[i] == '\0'); i++) {
				}
				break;
			}
		}
		if (p == strlen(word)) {
			k = i;
			return k;
		}
		p = 0;
		j = 0;
		if (s[i] == '\0') break;
	}
	return k;
}