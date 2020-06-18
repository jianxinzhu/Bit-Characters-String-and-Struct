/*    name: jianxin zhu
      date: 17/june/2020
 */
 
 #include<iostream>
#include<iomanip>
#include<vector>

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
template<typename T>
void packCharacter(vector<T> v1)
{
	unsigned int number = 0;

	for (int i = 0; i < 4; i++)
	{
		cout << "The character[" << i << "] is: " << v1[i] << endl;
		displayBit(v1[i]);


		if (i < 3)
		{
			number = (number | v1[i]) << 8;
		}
		else
		{
			number = number | v1[3];
		}
		
		 
	}
	cout << "The Characters are: ";
	for (auto c : v1)
	{
		cout << c << ' ';
	}


	cout << endl;
	displayBit(number);

}

int main()
{
	char a, b, c, d;
	unsigned int number = 0;
	cout << "Enter 4 character: ";
	cin >> a >> b >> c >> d;

	vector<char>v1;
	v1.push_back(a);
	v1.push_back(b);
	v1.push_back(c);
	v1.push_back(d);

	packCharacter(v1);



}
