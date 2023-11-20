/*Name:Uche hadassah
This program reads a word and checks if it is a palindrome*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char word[MAX];
	int i = 0, j;

	cout << "Enter a word:";
	cin >> word;

	for (j = 0; word[j] != '\0'; j++);//Gets the length of the word, same as "strlen(word);"

	while (i <= j-1)
	{
		if (word[i] != word[j-1])
		{
			cout << "This is not a palindrome";
			break;
        }
		if (i == j-1)
		{
			cout << "This is a palindrome";
			break;
		}
		i++;
		j--;
	}
	if (i > j - 1)//When we have an even number of words
	{
		cout << "This is a palindrome";
	}
}