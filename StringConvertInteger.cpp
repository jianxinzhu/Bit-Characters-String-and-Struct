/*     name: jianxin zhu
       date: 18/june/2020
*/

#include<iostream>
#include<cstdlib>

using namespace std;


int main()
{
	char s1[100];
	int value = 0;
	cout << "Enter 4 string and convert to integer: \n";

	for (int i = 1; i <= 4; ++i)
	{
		cout << "Enter [" << i << "] string:";
		cin >> s1;
		value += atoi(s1);

	}

	cout << endl;

	cout << "\nThe total value is: " << value << endl;

}
