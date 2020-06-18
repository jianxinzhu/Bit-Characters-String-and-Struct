/*    name:  jianxin zhu
      date:  17/june/2020
*/

#include<iostream>
#include<iomanip>

using namespace std;

void displayBit(unsigned number)
{
	const unsigned SHIFT = 8 * sizeof(unsigned) - 1;
	const unsigned MASK = static_cast<const unsigned>(1 << SHIFT);

	cout << setw(10) << number << " = ";

	for (int i = 1; i <= SHIFT + 1; ++i)
	{
		cout << ((number & MASK) ? '1' : '0');
		number <<= 1;

		if (i % 8 == 0)
		{
			cout << ' ';
		}

	}
	cout << endl;
}

void reverseBit(unsigned  number)
{
	const unsigned SHIFT = 8 * sizeof(unsigned);
	unsigned reverse_number = 0;


	for (int i = 0; i < SHIFT; i++)
	{
		unsigned temp;
		temp = (number & (1 << i));
			if (temp)
			{
				reverse_number |= (1 << (SHIFT - 1) - i);
		    }
	}
	displayBit(reverse_number);
}


int main()
{
	unsigned number;

	cout << "Enter number and reverse it: ";
	cin >> number;
	cout << "\nBefore reverse: ";
	displayBit(number);

	cout << "After reverse: ";
	reverseBit(number);

}
