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

	
	Levenstein () {}
	Levenstein(string FirstSentence, string SecondSentence) {
		string s1 = FirstSentence;
		string s2 = SecondSentence;
		BuildWords(s1);
		BuildWords(s2);
	}
	void BuildWords(string s) {
		vector<string> ArrayName;
		int a = 0; int b = 0;
		if (s=="s1") {
			ArrayName = FWordsArray;
		}
		else if (s=="s2") { ArrayName = SWordsArray; }
		for (int i = 0; i < s.length(); i++) {
			while (s[i] != ' ') {
				//ArrayName[a][b] = s[i];
				//ArrayName[a].push_back(s[i]);
				ArrayName[a] += s[i];
				//strcpy(ArrayName[a][b], s[i]);
				//b++;
			} //else { a++; b = 0; }
			a++;
		}
		if (s == "s1") {
			FWordsArray = ArrayName;
		}
		else if (s == "s2") { SWordsArray = ArrayName; }
	}

};

int main()
{
	
	string FirstSentence = "Mary is quicker than John";
	string SecondSentence = "John is quicker than Mary";
	Levenstein range(FirstSentence, SecondSentence);
	//cout << range.s1 << "\n";
	cout << range.FWordsArray[0][0];
	//cout << range.s1[0] << "\n";
	system("pause");
    return 0;
}

