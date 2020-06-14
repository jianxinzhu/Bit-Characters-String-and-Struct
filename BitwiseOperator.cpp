 /*    
      How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/

#include<iostream>
#include<iomanip>
using namespace std;

void displayBit(unsigned);

int main()
{
	unsigned number = 2179876355;
	unsigned mask = 1;
	cout << "The result of combining the following\n";
	displayBit(number);
	displayBit(mask);
	cout << "Using the bitwise AND operator & is\n";
	displayBit(number & mask);

	number = 15;
	mask = 241;

	cout << "\nThe result of combining following\n";
	displayBit(number);
	displayBit(mask);
	cout << "Using the bitwise OR operator | is\n";
	displayBit(number | mask);

	number = 139;
	mask = 199;

	cout << "\nThe result of combining following\n";
	displayBit(number);
	displayBit(mask);
	cout << "Using the bitwise XOR operator ^ is\n";
	displayBit(number ^ mask);

	number = 21845;

	cout << "\nThe one's complement of\n";
	displayBit(~number);

	number = 1000;
	cout << "\nThe 8-bit LEFT shift operator of\n";
	displayBit(number);
	displayBit(number<<8);
	cout << "The 8-bit RIGHT shift operator of\n";
	displayBit(number >> 8);


}
void displayBit(unsigned number)
{
	const unsigned SHIFT{ 8 * sizeof(unsigned) - 1 };
	const unsigned MASK{ static_cast<const unsigned>(1 << SHIFT) };

	cout << setw(10) << number << " = ";

	for (unsigned i = 1; i <= SHIFT+1; ++i)
	{
		cout << (number & MASK ? '1' : '0');
		number <<= 1;

		if (i % 8 == 0)
		{
			cout << ' ';
		}
	}
	cout << endl;
}
