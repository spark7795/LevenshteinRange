// LevenshteinRange.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
class Levenstein {
private:
	int min3(int n1, int n2, int n3) {
		int ans = n1;
		if (n2 < ans)
			ans = n2;
		if (n3 < ans)
			ans = n3;
		return ans;
	}
	int CharEqual (char a, char b) {
		if (a == b)
			return 0;
		else
			return 1;
	}
public:
	vector<string> FWordsArray;
	vector<string> SWordsArray;
	Levenstein () {}
	Levenstein(string FirstSentence, string SecondSentence) {
		string s1 = FirstSentence;
		string s2 = SecondSentence;
	//	BuildWords(s1,s2);
		
	}
/*	void BuildWords(string s1, string s2) {
		string fword,sword;
		stringstream ss1(s1);
		stringstream ss2(s2);
		while (ss1 >> fword)
			FWordsArray.push_back(fword);
		while (ss2 >> sword)
			SWordsArray.push_back(sword);
	}*/

	int SearchDifference(string FirstSentence, string SecondSentence) {
		string s1 = FirstSentence;
		string s2 = SecondSentence;
		int l1 = s1.length();
		int l2 = s2.length();

		vector<int> current_row(l2 + 1);
		vector<int> previous_row(l2 + 1);
		

		for (int j = 0; j <= l2; j++)
			current_row[j] = j;

		for (int i = 1; i <= l1; i++) {
			previous_row = current_row;
			current_row[0] = i;
			for (int j = 1; j <= l2; j++) {
				int temp1, temp2, temp3;
				temp1 = previous_row[j] + 1;
				temp2 = current_row[j - 1] + 1;
				temp3 = previous_row[j - 1] + CharEqual(s1[i - 1], s2[j - 1]);
				current_row[j] = min3(temp1, temp2, temp3);

			}
		}

		return current_row[l2];
		}
};

int main()
{
	
	string FirstSentence = "Mary is quicker than John";
	string SecondSentence = "John is quicker than Mary";
	Levenstein range(FirstSentence, SecondSentence);
	/*cout << "Words in text 1 : " << range.FWordsArray.size() << endl;
	cout << "\n" << range.FWordsArray[5][0] << "\n";
	cout << "Words in text 2 : " << range.SWordsArray.size() << endl;
	cout << "\n" << range.SWordsArray[0][0] << "\n";*/
	cout << "Levenshtein distance:" << range.SearchDifference(FirstSentence, SecondSentence);
	//cout << range.s1[0] << "\n";
	system("pause");
    return 0;
}

