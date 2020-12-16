#ifndef stroka_h
#define stroka_h

int WordsCount(char* s);
char* Words(char* s);
char* Word(char* s);
void DelWords(char* s, char ch);
void DelShortWords(char* s);
int WordCount(char* s, char* word);
void SingleWords(char* s);
void ABCOrder(char* s);
void SortByLength(char* s);
int SortByLength(char* s, char* word);
#endif