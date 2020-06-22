/*   name: jianxin zhu
     date: june/21/2020
*/


#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char s1[100];
	char s2[100];

	cout << "Enter two string, compare them:" << endl;

	cin.getline(s1, 100);
	cin.getline(s2, 100);

	if (strcmp(s1, s2) == 0)
	{
		cout << "Two string are equal";
	}
	else if (strcmp(s1, s2) == 1)
	{
		cout << "s1 is greater than s2";
	}
	else
	{
		cout << "s1 is less than s2";
	}
}
