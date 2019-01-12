// LevenshteinRange.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Levenstein {
private:
	//char *sname;
	//vector<string>* ArrayName;
	//int a = 0; int b = 0;

public:
	//char **FWordsArray = new char*[];
	//char **SWordsArray = new char*[];
	vector<string> FWordsArray;
	vector<string> SWordsArray;

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
		vector<string> ArrayName;
		int a = 0; int b = 0;
		if (strcmp(s,s1)) {
			ArrayName = FWordsArray;
		}
		else if (strcmp(s,s2)) { ArrayName = SWordsArray; }
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] != ' ') {
				ArrayName[a][b] = s[i];
				b++;
			}
			else { a++; b = 0; }
			
			
		}
	}

};

int main()
{
	
	char *FirstSentence = "Mary is quicker than John";
	char *SecondSentence = "John is quicker than Mary";
	Levenstein range(FirstSentence, SecondSentence);
	//cout << range.s1 << "\n";
	cout << range.FWordsArray[0][0];
	//cout << range.s1[0] << "\n";
	system("pause");
    return 0;
}

