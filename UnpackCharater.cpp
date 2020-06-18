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
	for (int i = 1; i <= SHIFT + 1; ++i)
	{
		cout << ((number & MASK) ? "1" : "0");
		number <<= 1;

		if (i % 8 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
}

void unpackCharacter(unsigned number)
{
	unsigned mask = 255;

	char a, b,c,d;
	a = static_cast<char>((number >> 24)& mask);
	b = static_cast<char>((number >> 16)& mask);
	c = static_cast<char>((number >> 8)& mask);
	d = static_cast<char>(number & mask);

	cout << a << " " << b << " " << c << " " << d << endl;

	displayBit(a);
	displayBit(b);
	displayBit(c);
	displayBit(d);
}

int main()
{
	unsigned number;
	cout << "Enter the pack character: ";
	cin >> number;

	cout << "\nThe pack character is: " << endl;
	displayBit(number);

	cout << "The Unpack Character is: " << endl;
	unpackCharacter(number);

}
