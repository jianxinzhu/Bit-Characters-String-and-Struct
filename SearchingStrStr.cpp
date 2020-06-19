/*    name: jianxin zhu
      date: june/18/2020
*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char s1[100], s2[15], * strPtr;

	cout << "Enter a line of text: ";
	cin.get(s1, 100);
	cout << "Enter a search string: ";
	cin >> s2;
	
	strPtr = strstr(s1, s2);

	if (strPtr)
	{
		cout << "\nFirst ocuurence of String is: " << strPtr << endl;

		strPtr = strstr(strPtr + 1, s2);

		if (strPtr)
		{
			cout << "\nSecond ocurrence of String is: " << strPtr << endl;
		}
		else
		{
			cout << "The ocurrence only appear once" << endl;
		}
	}
	else
	{
		cout << "The search string: '" << s2 << "' does not appear in this text" << endl;
	}
}
