//#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <set>
using namespace std;

// Function To Check The Vowels
bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I'  
             || ch == 'O' || ch == 'U');
}

//Function To Obtain The Result String With Vowels Duplicated

string duplicatedVowels(string str)
{
//String To Store The Result Strings
    string result = "";

//Loop To Check For Each Character
    for (int i = 0; i < str.length(); i++) {
        if (isVowel(str[i])) {
            result += str[i];
        }
        result += str[i];
    }
    return result;
}
int main() {

	string word;
	cout << "Enter The Word: ";
	cin >> word;

    string result = duplicatedVowels(word);

    cout << "Duplicated Vowels String is: " << result << endl;

    return 0;
}