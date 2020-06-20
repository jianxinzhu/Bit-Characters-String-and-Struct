/*    name: jianxin zhu
      date: june/18/2020
*/

#include<iostream>

using namespace std;


int main()
{
	int number;

	do
	{
		cout << "Enter ASCII number:";
		cin >> number;

		cout << static_cast<char>(number) << endl;
	} while (number >= 0 && number <= 255);
}
      
