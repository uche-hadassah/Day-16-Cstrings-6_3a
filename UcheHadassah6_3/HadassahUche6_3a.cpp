/*Palindromes: a) Write a program which reads a word and checks if it is a palindrome 
by outputting the appropriate message: This is a palindrome accordingly. A 
word is a palindrome if the letters spell the same message when written both forward 
and backward. For example: madam, anna, bob, noon are palindromes.*/
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
	//I will add a condition to take a word not a string
	for (j = 0; word[j] != '\0'; j++);//Gets the length of the word
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
		}
		i++;
		j--;
	}
	if (i > j - 1)
	{
		cout << "This is a palindrome";
	}
}