/*    name: jianxin zhu
      date: june/28/2020
*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char s1[5][100];
	int i, length;

	for (i = 0; i < 5; ++i)
	{
		cout << "Enter [" << i + 1 << "] line of text: ";
		cin.getline(&s1[i][0], 100);
	}


	for (i = 0; i < 5; ++i)
	{
		length = strlen(&s1[i][0]);

		if (strcmp(&s1[i][length-2], "ed")==0)
		{
			cout << &s1[i][0] << endl;
		}

	}
}
