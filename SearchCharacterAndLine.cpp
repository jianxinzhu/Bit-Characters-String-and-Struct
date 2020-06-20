/*   name: jianxin zhu
     date: june/19/2020
*/


#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	char  text[3][100], searchline[15], search, * searchPtr;
	int count = 0, countline = 0, i;

	for (i = 0; i < 3; ++i)
	{
		cout << "Enter ["<<i+1<<"] line of text:";
		cin.getline(&text[i][0], 100);
	}



	for ( i = 0; i < 3; ++i)
	{
		for (int j = 0; text[i][j] != '\0'; ++j)
		{
			char c = static_cast<char>(tolower(text[i][j]));
			text[i][j] = c;
		}
	}


	cout << "\nEnter a search key: ";
	cin >> search;

	cout << "\nEnter a search line: ";
	cin >> searchline;

	for (int i = 0; i < 3; ++i)
	{

		searchPtr = &text[i][0];

		while (searchPtr = strchr(searchPtr, search))

		{
			++count;
			++searchPtr;
		}
	}

	for (i = 0; i < 3; ++i)
	{
		searchPtr = &text[i][0];
		while (searchPtr = strstr(searchPtr, searchline))
		{
			++countline;
			++searchPtr;
		}
	}

	cout << "\nThe search key: " << search << " found " << count << " times" << endl;
	cout << "The searchline: " << searchline << " found " << countline << " times" << endl;
}
