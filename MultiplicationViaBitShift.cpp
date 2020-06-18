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
		cout << (number & MASK ? '1' : '0');
		number <<= 1;

		if (i % 8 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
}
void pow2(unsigned n, unsigned p)
{
	n = n * (p << 1);
	displayBit(n);
}

int main()
{
	int base, pow;
	cout << "Enter base and pow: ";
	cin >> base;
	cin >> pow;
	cout << "\nThe Base is: ";
	displayBit(base);
	cout << "\nThe Pow2 is: ";
	pow2(base, pow);

	cout << endl;

}
