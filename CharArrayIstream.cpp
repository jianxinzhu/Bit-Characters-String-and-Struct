/*   name: jianxin zhu
     date: 18/june/2020
*/


#include<iostream>
#include<cctype>

using namespace std;



void printArray(char s[])
{

		for (int i = 0; s[i] != '\0'; ++i)
		{
			cout << static_cast<char>(toupper(s[i]));
		}

	cout << endl;

		for (int i = 0; s[i] != '\0'; ++i)
		{
			cout << static_cast<char>(tolower(s[i]));
		}

	cout << endl;
}

int main()
{
	char s[100];

	cout << "Enter a text:";
	cin.getline(s, 100);

	printArray(s);
}
