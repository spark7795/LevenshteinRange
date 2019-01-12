// LevenshteinRange.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
class Levenstein {
private:
	char *sname;
	vector<string> ArrayName;
	int a,b;

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
		if (s == s1) {
			ArrayName = FWordsArray;
		}
		else if (s == s2) { ArrayName = SWordsArray; }
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] != ' ') {
				ArrayName[a][b] = s[i];
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
	cout << range.FWordsArray[0][0];
	//cout << range.s1[0] << "\n";
	system("pause");
    return 0;
}

