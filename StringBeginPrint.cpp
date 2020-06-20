/*   name: jianxin zhu
     date: june/18/2020
*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char s1[5][100], character;
	int i, length;

	for (i = 0; i < 5; ++i)
	{
		cout << "Enter [" << i + 1 << "] line of text: ";
		cin.getline(&s1[i][0], 100);
	}

	cout << "Enter the characters you want ending with:";
	cin >> character;

	for (i = 0; i < 5; ++i)
	{

		if (s1[i][0] == character)
		{
			cout << &s1[i][0] << endl;
		}

	}
}
