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
	unsigned int inputValue{ 0 };
	cout << "Enter Posistive Number and Display it on binary number: ";
	cin >> inputValue;
	displayBit(inputValue);
}

void displayBit(unsigned value)
{
	const unsigned SHIFT{ 8 * sizeof(unsigned) - 1 };
	const unsigned MASK{ static_cast<const unsigned>(1 << SHIFT) };

	cout << setw(10) << value << " = ";

	for (unsigned i = 1; i <= SHIFT + 1; ++i)
	{
		cout << (value & MASK ? '1' : '0');
		value <<= 1;

		if (i % 8 == 0)
		{
			cout << ' ';
		}

	}
	cout << endl;
}
