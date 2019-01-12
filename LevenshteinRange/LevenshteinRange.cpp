// LevenshteinRange.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Levenstein {
private:
	char *sname;
	
	int a,b;

public:
	char **FWordsArray = new char*[];
	char **SWordsArray = new char*[];
	char *s1;
	char *s2;
	Levenstein () {}
	Levenstein(char *FirstSentence, char *SecondSentence) {
		s1 = FirstSentence;
		s2 = SecondSentence;
		BuildWords(s1);
		BuildWords(s2);
	}
	void BuildWords(char *s) {
		for (int i = 0; i < strlen(s); i++) {
			if (sname[i] != ' ') {
				FWordsArray[a][b] = sname[i];
			}
			else {	a++; }
			b++;
		}
	}

};

int main()
{
	
	char *FirstSentence = "Mary is quicker than John";
	char *SecondSentence = "John is quicker than Mary";
	Levenstein range(FirstSentence, SecondSentence);
	//cout << range.s1 << "\n";
	cout << range.FWordsArray;
	//cout << range.s1[0] << "\n";
	system("pause");
    return 0;
}

