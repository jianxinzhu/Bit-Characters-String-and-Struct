/*    name: jianxin zhu
      date: 17/june/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;


void displayBit(unsigned number)
{
	const unsigned SHIFT = 8 * sizeof(unsigned) - 1;
	const unsigned MASK = static_cast<const unsigned>(1 << SHIFT);

	cout << setw(10) << number << " = ";

	for (unsigned i = 1; i <= SHIFT + 1; ++i)
	{
		cout << (number& MASK ? '1' : '0');
		number <<= 1;

		if (i % 8 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
}
int main()
{
	int number;
	cout << "Enter integer Value:";
	cin >> number;

	displayBit(number);
	cout << "\nAfter RIGHT-SHIFTTING 4 bit: \n";
	displayBit(number >> 4);
}
